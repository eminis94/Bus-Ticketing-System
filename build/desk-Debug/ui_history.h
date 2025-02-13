/********************************************************************************
** Form generated from reading UI file 'history.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_H
#define UI_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_History
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QPushButton *closeButton;

    void setupUi(QDialog *History)
    {
        if (History->objectName().isEmpty())
            History->setObjectName("History");
        History->resize(400, 300);
        verticalLayout = new QVBoxLayout(History);
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(History);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        closeButton = new QPushButton(History);
        closeButton->setObjectName("closeButton");

        verticalLayout->addWidget(closeButton);


        retranslateUi(History);

        QMetaObject::connectSlotsByName(History);
    } // setupUi

    void retranslateUi(QDialog *History)
    {
        History->setWindowTitle(QCoreApplication::translate("History", "Booking History", nullptr));
        closeButton->setText(QCoreApplication::translate("History", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class History: public Ui_History {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H
