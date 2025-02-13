/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label_username;
    QLabel *label_password;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QPushButton *loginButton;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(400, 250);
        label_username = new QLabel(Login);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(50, 50, 81, 31));
        label_password = new QLabel(Login);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(50, 100, 81, 31));
        usernameInput = new QLineEdit(Login);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(150, 50, 200, 31));
        passwordInput = new QLineEdit(Login);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(150, 100, 200, 31));
        passwordInput->setEchoMode(QLineEdit::Password);
        loginButton = new QPushButton(Login);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(150, 150, 200, 31));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Bus Ticket Login", nullptr));
        label_username->setText(QCoreApplication::translate("Login", "Username:", nullptr));
        label_password->setText(QCoreApplication::translate("Login", "Password:", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
