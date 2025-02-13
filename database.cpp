#include "database.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QVariant>
#include <QDebug>

QSqlDatabase db;

bool Database::connect() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("database.db");

    if (!db.open()) {
        qDebug() << "Database error: " << db.lastError().text();
        return false;
    }

    // Create user table if not exists
    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS users (username TEXT, password TEXT)");

    // query.exec("DROP TABLE IF EXISTS bookings");  // Delete old table
    query.exec("CREATE TABLE IF NOT EXISTS bookings (id INTEGER PRIMARY KEY, source TEXT, destination TEXT, date TEXT, seatNo TEXT)");

    return true;
}

bool Database::validateUser(const QString &username, const QString &password) {
    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE username = ? AND password = ?");
    query.addBindValue(username);
    query.addBindValue(password);

    if (query.exec() && query.next()) {
        return true;  // User exists
    }

    // Check if there are any users in the database
    QSqlQuery checkUsers;
    checkUsers.prepare("SELECT COUNT(*) FROM users");

    if (checkUsers.exec() && checkUsers.next()) {
        int userCount = checkUsers.value(0).toInt();

        if (userCount == 0) {
            // No users exist, create a default admin user
            QSqlQuery insertQuery;
            insertQuery.prepare("INSERT INTO users (username, password) VALUES (?, ?)");
            insertQuery.addBindValue("admin");
            insertQuery.addBindValue("admin");

            if (insertQuery.exec()) {
                qDebug() << "Default user 'admin' created.";
            } else {
                qDebug() << "Error creating default user:" << insertQuery.lastError().text();
            }
        }
    } else {
        qDebug() << "Error checking users:" << checkUsers.lastError().text();
    }

    return false;  // User not found
}


