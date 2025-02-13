/********************************************************************************
** Form generated from reading UI file 'navigation.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATION_H
#define UI_NAVIGATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Navigation
{
public:
    QPushButton *createNewTicketButton;
    QPushButton *viewHistoryButton;
    QPushButton *exitButton;

    void setupUi(QDialog *Navigation)
    {
        if (Navigation->objectName().isEmpty())
            Navigation->setObjectName("Navigation");
        Navigation->resize(400, 300);
        createNewTicketButton = new QPushButton(Navigation);
        createNewTicketButton->setObjectName("createNewTicketButton");
        createNewTicketButton->setGeometry(QRect(110, 70, 161, 31));
        viewHistoryButton = new QPushButton(Navigation);
        viewHistoryButton->setObjectName("viewHistoryButton");
        viewHistoryButton->setGeometry(QRect(110, 110, 161, 31));
        exitButton = new QPushButton(Navigation);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(110, 150, 161, 31));

        retranslateUi(Navigation);

        QMetaObject::connectSlotsByName(Navigation);
    } // setupUi

    void retranslateUi(QDialog *Navigation)
    {
        Navigation->setWindowTitle(QCoreApplication::translate("Navigation", "Bus Ticketing System", nullptr));
        createNewTicketButton->setText(QCoreApplication::translate("Navigation", "Create New Ticket", nullptr));
        viewHistoryButton->setText(QCoreApplication::translate("Navigation", "Tickets History", nullptr));
        exitButton->setText(QCoreApplication::translate("Navigation", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Navigation: public Ui_Navigation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATION_H
