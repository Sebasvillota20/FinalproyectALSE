#include "main_app.h"
#include <QApplication>
#include <QCoreApplication>
#include <sqlite3.h>

int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    main_app w;

    //w.show();
    w.Exect();

    return a.exec();
}
