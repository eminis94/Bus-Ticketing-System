#ifndef BOOKING_H
#define BOOKING_H

#include <QDialog>

namespace Ui {
class Booking;
}

class Booking : public QDialog {
    Q_OBJECT

public:
    explicit Booking(QWidget *parent = nullptr);
    ~Booking();

private slots:
    void on_bookButton_clicked();
    void on_historyButton_clicked();

private:
    Ui::Booking *ui;
};

#endif // BOOKING_H
