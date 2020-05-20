#ifndef FORMULARIO_H
#define FORMULARIO_H

#include "plataforma.h"
#include <QMainWindow>
#include "paciente.h"
#include "main_app.h"

using namespace std;
/** @class formulario
 * @brief En esta clase se implementan los métodos usados en la ventana llamada formulario,
 * donde se muestra información del usuario como su edad y el usuario con el que se registró,
 * además, se registran los pacientes de los que se obtiene la información socio económica. luego,
 * se llama la ventana main_app en la que se puede realizar la prueba de agilidad.
*/
namespace Ui {
class formulario;
}

class formulario : public QWidget
{
    Q_OBJECT

public:
    explicit formulario(QWidget *parent = 0);
    inline void set_nombreU(string nombre_u){  _nombre_usuario = nombre_u; }
    inline string get_nombreU() const { return _nombre_usuario; }
    inline void set_edad(int edad){  _edad = edad; }
    inline int get_edad() const { return _edad; }
    inline void set_tiempoprueba(int time_pru){  _timer2 = time_pru; }
    inline int get_tiempoprueba() const { return _timer2; }
    ~formulario();

public slots:
    void reciboDatos( string f, int d );

signals:
    void enviar_Datostiempo( int prueba, double cedula_paci);

private slots:

    void on_iniciar_f_clicked();
    void on_salir_f_clicked();
    void on_nombre_f_textChanged(const QString &arg1);
    void on_apellido_f_textChanged(const QString &arg1);
    void on_doc_f_textChanged(const QString &arg1);
    void on_fecha_f_textChanged(const QString &arg1);
    void on_direccion_f_textChanged(const QString &arg1);
    void on_nivel_f_textChanged(const QString &arg1);
    void on__time1m_clicked();
    void on__time2m_clicked();
    void on__time30_clicked();

private:
    Ui::formulario *ui; /*!< Puntero usado para abrir la GUI de esta ventana. */
    Db_local _db; /*!< Con esta variable podeoms llamar funciones de la clase db_local. */
    paciente _pac; /*!< En esta variable vamos a ingresar todos los datos que se registren de un paciente. */
     int _timer2; /*!< Un entero en el que guardamos el valor de un tiempo determinado. */
     string _nombre_usuario; /*!< Esta cadena va a contener el nombre del usuario que este registrando a los pacientes. */
     int _edad; /*!< Un entero que va a contener el valor de la edad del usuario que este registrando a los pacientes. */
     QTimer *t; /*!< Una variable Qtimer que podemos usar para llevar el tiempo de la ejecución de una instrucción. */

};

#endif // FORMULARIO_H
