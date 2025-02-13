#include "navigation.h"
#include "ui_navigation.h"
#include "history.h"
#include "booking.h"

Navigation::Navigation(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Navigation)
{
    ui->setupUi(this);

    connect(ui->createNewTicketButton, &QPushButton::clicked, this, &Navigation::create_new_ticketButton_clicked);
    connect(ui->viewHistoryButton, &QPushButton::clicked, this, &Navigation::view_historyButton_clicked);
    connect(ui->exitButton, &QPushButton::clicked, this, &Navigation::exitButton_clicked);
}

void Navigation::view_historyButton_clicked(){
    History *ticketHistoryWindow = new History(this);
    ticketHistoryWindow->exec();
}

Navigation::~Navigation()
{
    delete ui;
}

void Navigation::create_new_ticketButton_clicked(){
    Booking *newTicketWindow = new Booking(this);
    newTicketWindow->exec();
}

void Navigation::exitButton_clicked(){
    QApplication::quit();
}


