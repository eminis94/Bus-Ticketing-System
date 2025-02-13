#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QtSql/QSqlDatabase>

class Database {
public:
    static bool connect();
    static bool validateUser(const QString &username, const QString &password);
};

#endif // DATABASE_H
