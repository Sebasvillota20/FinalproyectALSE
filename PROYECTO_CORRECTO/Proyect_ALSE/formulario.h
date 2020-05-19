#ifndef FORMULARIO_H
#define FORMULARIO_H

#include "plataforma.h"
#include <QMainWindow>
#include "paciente.h"
#include "main_app.h"

using namespace std;

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
    Ui::formulario *ui;
    Db_local _db;
    paciente _pac;
     int _timer2;
     string _nombre_usuario;
     int _edad;


};

#endif // FORMULARIO_H
