#include <QCoreApplication>
#include "paciente.h"

int main(int argc, char **argv){
    QCoreApplication a( argc, argv );  // Para que puedan funcionar los timers
                                       // debe ser una aplicación de Qt.
    a.exec();                           // Hace posible que la QCoreApplication maneje los threads.
    return 0;
}
