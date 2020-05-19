#ifndef USUARIO_H
#define USUARIO_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <string>
using namespace std;
class usuario{
private:
   string _nombre;
   string _apellido;
   string _contrasena;
   string _fecha;
   string _user_1;
   double _Doc;
   int _edad;

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
