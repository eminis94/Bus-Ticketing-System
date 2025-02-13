#include <QDialog>
#include <QSqlQueryModel>

namespace Ui {
class History;
}

class History : public QDialog
{
    Q_OBJECT

public:
    explicit History(QWidget *parent = nullptr);
    ~History();

private:
    Ui::History *ui;
};
