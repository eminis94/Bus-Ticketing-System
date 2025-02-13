#include "booking.h"
#include "ui_booking.h"
#include "ticketdetails.h"
#include <QMessageBox>
#include "database.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include "history.h"

Booking::Booking(QWidget *parent) : QDialog(parent), ui(new Ui::Booking) {
    ui->setupUi(this);


    ui->sourceDropdown->addItem("Arusha");
    ui->sourceDropdown->addItem("Mwanza");
    ui->sourceDropdown->addItem("Dar es Salaam");
    ui->sourceDropdown->addItem("Kigoma");
    ui->sourceDropdown->addItem("Tanga");


    ui->destinationDropdown->addItem("Tanga");
    ui->destinationDropdown->addItem("Mwanza");
    ui->destinationDropdown->addItem("Dar es Salaam");
    ui->destinationDropdown->addItem("Arusha");
    ui->destinationDropdown->addItem("Kigoma");

    ui->seatNoDropdown->addItem("1A");
    ui->seatNoDropdown->addItem("2A");
    ui->seatNoDropdown->addItem("3A");
    ui->seatNoDropdown->addItem("4A");
    ui->seatNoDropdown->addItem("5A");
    ui->seatNoDropdown->addItem("1B");
    ui->seatNoDropdown->addItem("2B");
    ui->seatNoDropdown->addItem("3B");
    ui->seatNoDropdown->addItem("4B");
    ui->seatNoDropdown->addItem("5B");
}

Booking::~Booking() {
    delete ui;
}

void Booking::on_historyButton_clicked() {
    History *historyWindow = new History(this);
    historyWindow->exec();
}


void Booking::on_bookButton_clicked() {
    QString source = ui->sourceDropdown->currentText();
    QString destination = ui->destinationDropdown->currentText();
    QString date = ui->dateEdit->text();
    QString seatNo = ui->seatNoDropdown->currentText();


    QSqlQuery query;
    query.prepare("INSERT INTO bookings (source, destination, date, seatNo) VALUES (?, ?, ?, ?)");
    query.addBindValue(source);
    query.addBindValue(destination);
    query.addBindValue(date);
    query.addBindValue(seatNo);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Booking Successful!");


        // Open the TicketDetails window with the booking information
        TicketDetails *ticketDetailsWindow = new TicketDetails(source, destination, date, seatNo);
        ticketDetailsWindow->exec();
    } else {
        QMessageBox::warning(this, "Error", "Booking Failed!");
    }




}
