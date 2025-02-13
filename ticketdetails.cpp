#include "ticketdetails.h"
#include "ui_ticketdetails.h"

TicketDetails::TicketDetails(const QString &source, const QString &destination,const QString &date,const QString &seatNo ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TicketDetails)
{
    ui->setupUi(this);

    ui->labelSource->setText("Source: " + source);
    ui->labelDestination->setText("Destination: " + destination);
    ui->labelDate->setText("Date: " + date);
    ui->labelSeatNo->setText("Seat No: " + seatNo);
}

TicketDetails::~TicketDetails()
{
    delete ui;
}
