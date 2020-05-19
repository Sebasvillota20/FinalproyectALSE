#ifndef MAIN_APP_H
#define MAIN_APP_H

#include "plataforma.h"
#include <QMainWindow>
#include "paciente.h"
#include "db_local.h"
#include "usuario.h"
#include <QTimer>
#include <QTime>

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
    Ui::main_app *ui;
    Db_local   _db;
     QTimer *_timer;
     clock_t t;
     QString a;
     int  _tiempo;
     char _estado;
     int cont=0;
     double _ced_paci;

};

#endif // MAIN_APP_H
