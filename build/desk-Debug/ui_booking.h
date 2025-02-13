/********************************************************************************
** Form generated from reading UI file 'booking.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKING_H
#define UI_BOOKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Booking
{
public:
    QLabel *label_source;
    QComboBox *sourceDropdown;
    QLabel *label_destination;
    QComboBox *destinationDropdown;
    QLabel *label_date;
    QDateEdit *dateEdit;
    QPushButton *bookButton;
    QComboBox *seatNoDropdown;
    QLabel *label_seat_number;

    void setupUi(QDialog *Booking)
    {
        if (Booking->objectName().isEmpty())
            Booking->setObjectName("Booking");
        Booking->resize(450, 350);
        label_source = new QLabel(Booking);
        label_source->setObjectName("label_source");
        label_source->setGeometry(QRect(50, 30, 100, 31));
        sourceDropdown = new QComboBox(Booking);
        sourceDropdown->setObjectName("sourceDropdown");
        sourceDropdown->setGeometry(QRect(170, 30, 200, 31));
        label_destination = new QLabel(Booking);
        label_destination->setObjectName("label_destination");
        label_destination->setGeometry(QRect(50, 80, 100, 31));
        destinationDropdown = new QComboBox(Booking);
        destinationDropdown->setObjectName("destinationDropdown");
        destinationDropdown->setGeometry(QRect(170, 80, 200, 31));
        label_date = new QLabel(Booking);
        label_date->setObjectName("label_date");
        label_date->setGeometry(QRect(50, 130, 100, 31));
        dateEdit = new QDateEdit(Booking);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(170, 130, 200, 31));
        dateEdit->setCalendarPopup(true);
        bookButton = new QPushButton(Booking);
        bookButton->setObjectName("bookButton");
        bookButton->setGeometry(QRect(170, 250, 200, 31));
        seatNoDropdown = new QComboBox(Booking);
        seatNoDropdown->setObjectName("seatNoDropdown");
        seatNoDropdown->setGeometry(QRect(170, 180, 201, 31));
        label_seat_number = new QLabel(Booking);
        label_seat_number->setObjectName("label_seat_number");
        label_seat_number->setGeometry(QRect(50, 190, 101, 18));

        retranslateUi(Booking);

        QMetaObject::connectSlotsByName(Booking);
    } // setupUi

    void retranslateUi(QDialog *Booking)
    {
        Booking->setWindowTitle(QCoreApplication::translate("Booking", "Bus Ticket Booking", nullptr));
        label_source->setText(QCoreApplication::translate("Booking", "Source:", nullptr));
        label_destination->setText(QCoreApplication::translate("Booking", "Destination:", nullptr));
        label_date->setText(QCoreApplication::translate("Booking", "Journey Date:", nullptr));
        bookButton->setText(QCoreApplication::translate("Booking", "Book Ticket", nullptr));
        label_seat_number->setText(QCoreApplication::translate("Booking", "Seat Number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Booking: public Ui_Booking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKING_H
