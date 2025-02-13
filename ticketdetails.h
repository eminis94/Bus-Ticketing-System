#ifndef TICKETDETAILS_H
#define TICKETDETAILS_H

#include <QDialog>

namespace Ui {
class TicketDetails;
}

class TicketDetails : public QDialog
{
    Q_OBJECT

public:
    explicit TicketDetails(const QString &source, const QString &destination, const QString &date, const QString &seatNo,QWidget *parent = nullptr);
    ~TicketDetails();

private:
    Ui::TicketDetails *ui;
};

#endif // TICKETDETAILS_H
