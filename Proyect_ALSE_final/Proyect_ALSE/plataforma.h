#ifndef PLATAFORMA_H
#define PLATAFORMA_H
#include <QWidget>
#include "db_local.h"
#include "usuario.h"
/** @class plataforma
 * @brief Una ventana de esta clase es la que inicia el sistema de
 * todo el programa, pues es donde se registra e ingresa un usuario.
 * Es quien llama a las ventanas registro y formulario.
*/
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
    Ui::plataforma *ui; /*!< Un puntero que nos permite abrir o cerrar una ventana de esta clase. */
    Db_local _db; /*!< Esta variable nos permite hacer uso de las funciones de la clase Db_local. */
    usuario _user; /*!< Este tipo de variable nos permite usar la informacion del usuario que este intentando ingresar al sistema. */
    string _nombre_usuario; /*!< Cadena de caracteres que contiene el nombre del usuario que este ingresando. */
    int _edad; /*!< Guarda la edad del usuario. */
};

#endif // PLATAFORMA_H
