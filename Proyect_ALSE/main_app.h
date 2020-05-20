#ifndef MAIN_APP_H
#define MAIN_APP_H
#include "plataforma.h"
#include <QMainWindow>
#include "paciente.h"
#include "db_local.h"
#include "usuario.h"
#include <QTimer>
#include <QTime>
#include "datos_test.h"
/** @class main_app
 * @brief En esta clase se va a realizar la prueba de agilidad que debe
 * hacer un paciente al momento de registrarse en nuestro sistema, se guardan
 * en la base de datos el tiempo en el que se oprime un boton especifico, si acerto
 * oprimiendolo y cual paciente este realizando la prueba.
*/
namespace Ui {
class main_app;
}

class main_app : public QMainWindow
{
    Q_OBJECT

public:
    explicit main_app(QWidget *parent = 0);
    void Exect();
    ~main_app();
    inline void setTiempo(int tiempo){  _tiempo = tiempo; }
    inline int getTiempo() const { return _tiempo; }
    inline void setcedula(double cedula){  _ced_paci = cedula; }
    inline double getcedula() const { return _ced_paci; }
     QTimer *tiempo_prueba;
    void apagarboton();
    void cerrarprueba();

private slots:
    void cambio_estado();
    void contador();
    void on_bt1_clicked();
    void on_bt2_clicked();
    void on_bt3_clicked();
    void on_bt4_clicked();
    void on_bt5_clicked();
    void on_bt6_clicked();
    void on_bt7_clicked();
    void on_bt8_clicked();
    void on_bt9_clicked();
    void on_bt10_clicked();
    void on_bt11_clicked();

public slots:
    void recibo_Datos(int time_prueba, double pac );

private:
    Ui::main_app *ui; /*!< Puntero que nos permite iniciar la GUI de esta clase, o tambien cerrarla. */
    Db_local   _db; /*!< Variable que nos permite llamar funciones de la clase Db_local. */
     QTimer *_timer; /*!< Puntero de tipo Qtimer  */
     QString a;
     int  _tiempo; /*!< Variable en la que guardamos el tiempo que va de la prueba */
     QTimer *retardo; /*!< Este puntero nos permite esperar el tiempo que necesitemos para hacer cierta instrucción. */
     int _estado; /*!< Informa del estado en el que se encuentra la prueba, es decir, que boton estara activado. */
     int cont=0; /*!< Entero que cuenta el número de aciertos que lleva el paciente. */
     double _ced_paci; /*!< Variable tipo doble que guarda la cedula del paciente para poderlo enviar a la base de datos. */
     string CoI; /*!< Cadena de caracteres que usamos para enviar un mensaje a la base de datos. */
     Datos_test _data; /*!< Esta variable es la que se envia para poder registrar el tiempo y boton que se oprimio a lo largo de la prueba. */

};

#endif // MAIN_APP_H
