#include "history.h"
#include "ui_history.h"
#include <QSqlQuery>
#include <QSqlQueryModel>

History::History(QWidget *parent) : QDialog(parent), ui(new Ui::History) {
    ui->setupUi(this);

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    query.exec("SELECT source, destination, date, seatNo FROM bookings");

    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, "Source");
    model->setHeaderData(1, Qt::Horizontal, "Destination");
    model->setHeaderData(2, Qt::Horizontal, "Date");
    model->setHeaderData(3, Qt::Horizontal, "Seat No");

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();

    // Close button functionality
    connect(ui->closeButton, &QPushButton::clicked, this, &QDialog::close);
}

History::~History() {
    delete ui;
}
