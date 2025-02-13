#include "login.h"
#include "ui_login.h"
#include "booking.h"
#include <QMessageBox>
#include "database.h"
#include "navigation.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_loginButton_clicked() {
    QString username = ui->usernameInput->text();
    QString password = ui->passwordInput->text();

    if (Database::validateUser(username, password)) {
        QMessageBox::information(this, "Login", "Login successful!");
        this->close();
        // Booking *bookingScreen = new Booking();
        // bookingScreen->show();
        Navigation *navigationScreen = new Navigation();
        navigationScreen->show();
    } else {
        QMessageBox::warning(this, "Login", "Invalid credentials!");
    }
}

