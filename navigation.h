#ifndef NAVIGATION_H
#define NAVIGATION_H

#include <QDialog>

namespace Ui {
class Navigation;
}

class Navigation : public QDialog
{
    Q_OBJECT

public:
    explicit Navigation(QWidget *parent = nullptr);
    ~Navigation();

private slots:  // Slot for when the booking button is clicked
    void view_historyButton_clicked();
    void create_new_ticketButton_clicked();
    void exitButton_clicked();


private:
    Ui::Navigation *ui;

};

#endif // NAVIGATION_H
