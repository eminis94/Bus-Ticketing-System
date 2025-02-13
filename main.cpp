#include "login.h"
#include "database.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Database::connect();

    Login loginScreen;
    loginScreen.show();

    return app.exec();
}
