#ifndef PLATAFORMA_H
#define PLATAFORMA_H

#include <QWidget>
#include "db_local.h"
#include "usuario.h"

namespace Ui {
class plataforma;
}

class plataforma : public QWidget
{
    Q_OBJECT

public:
    explicit plataforma(QWidget *parent = 0);
    ~plataforma();
    inline void set_nombreU(string nombre_u){  _nombre_usuario = nombre_u; }
    inline string get_nombreU() const { return _nombre_usuario; }
    inline void set_edadU(int edad){  _edad = edad; }
    inline int get_edadU() const { return _edad; }

signals:
    void enviarDatos( string first, int divisor );

private slots:
    void on_registro_p_clicked();
    void on_ingreso_p_clicked();

private:
    Ui::plataforma *ui;
    Db_local       _db;
    usuario         _user;
    string _nombre_usuario;
    int _edad;
};

#endif // PLATAFORMA_H
