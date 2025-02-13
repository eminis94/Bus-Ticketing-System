/********************************************************************************
** Form generated from reading UI file 'ticketdetails.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETDETAILS_H
#define UI_TICKETDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TicketDetails
{
public:
    QLabel *labelSource;
    QLabel *labelDestination;
    QLabel *labelDate;
    QLabel *labelSeatNo;
    QPushButton *printButton;

    void setupUi(QDialog *TicketDetails)
    {
        if (TicketDetails->objectName().isEmpty())
            TicketDetails->setObjectName("TicketDetails");
        TicketDetails->resize(400, 300);
        labelSource = new QLabel(TicketDetails);
        labelSource->setObjectName("labelSource");
        labelSource->setGeometry(QRect(20, 20, 360, 30));
        labelDestination = new QLabel(TicketDetails);
        labelDestination->setObjectName("labelDestination");
        labelDestination->setGeometry(QRect(20, 60, 360, 30));
        labelDate = new QLabel(TicketDetails);
        labelDate->setObjectName("labelDate");
        labelDate->setGeometry(QRect(20, 100, 360, 30));
        labelSeatNo = new QLabel(TicketDetails);
        labelSeatNo->setObjectName("labelSeatNo");
        labelSeatNo->setGeometry(QRect(20, 140, 360, 30));
        printButton = new QPushButton(TicketDetails);
        printButton->setObjectName("printButton");
        printButton->setGeometry(QRect(150, 200, 100, 40));

        retranslateUi(TicketDetails);

        QMetaObject::connectSlotsByName(TicketDetails);
    } // setupUi

    void retranslateUi(QDialog *TicketDetails)
    {
        TicketDetails->setWindowTitle(QCoreApplication::translate("TicketDetails", "Ticket Details", nullptr));
        labelSource->setText(QCoreApplication::translate("TicketDetails", "Source:", nullptr));
        labelDestination->setText(QCoreApplication::translate("TicketDetails", "Destination:", nullptr));
        labelDate->setText(QCoreApplication::translate("TicketDetails", "Date:", nullptr));
        labelSeatNo->setText(QCoreApplication::translate("TicketDetails", "Seat No:", nullptr));
        printButton->setText(QCoreApplication::translate("TicketDetails", "Print Ticket", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicketDetails: public Ui_TicketDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETDETAILS_H
