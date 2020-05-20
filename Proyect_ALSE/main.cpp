#include "main_app.h"
#include <QApplication>
#include <QCoreApplication>
#include <sqlite3.h>
/*!
 * Aqui inicia todo el programa, se inicializa la función exect con el objetivo
 * de iniciar la GUI en un punto diferente al predeterminado.
*/
int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    main_app w;

    //w.show();
    w.Exect();

    return a.exec();
}
