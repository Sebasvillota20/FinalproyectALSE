#ifndef USUARIO_H
#define USUARIO_H
#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <string>
using namespace std;
/** @class usuario
 * @brief En esta clase definimos todos los datos que se deben
 * tener de un usuario que utilice la plataforma de registros.
 * Las funciones fueron implementadas como funciones inline que optimizan
 * los recursos de la maquina agilizando algunos procesos.
*/
class usuario{
private:
   string _nombre; /*!< Nombre del usuario. */
   string _apellido; /*!< Apellido del usuario. */
   string _contrasena; /*!< Contraseña que elige el usuario para poder entrar al sistema. */
   string _fecha; /*!< Fecha de nacimiento. */
   string _user_1; /*!< Usuario con el que se reconoce al usuario de la plataforma. */
   double _Doc; /*!< Numero de documento del usuario. */
   int _edad; /*!< Edad del usuario. */

public:
    usuario();
    ~usuario();
    inline void setFecha(string fecha){  _fecha = fecha; }
    inline string getFecha() const { return _fecha; }
    inline void setDoc(double Doc){  _Doc = Doc; }
    inline double getDoc() const { return _Doc; }
    inline void setNombre(string nombre){  _nombre = nombre; }
    inline string getNombre() const { return _nombre; }
    inline void setApellido(string apellido){  _apellido = apellido; }
    inline string getApellido() const { return _apellido; }
    inline void setContrasena(string contrasena){  _contrasena = contrasena; }
    inline string getContrasena() const { return _contrasena; }
    inline void set_Usuario(string user_1){  _user_1 = user_1; }
    inline string get_Usuario() const { return _user_1; }
    inline void set_edad(int edad){  _edad = edad; }
    inline int get_edad() const { return _edad; }
};

#endif // USUARIO_H
