#ifndef PACIENTE_H
#define PACIENTE_H
#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <string>
#include <iostream>
using namespace std;
/** @class paciente
 * @brief En esta clase definimos la información básica que
 * debe tener un paciente, implementando las funciones Getter
 * y Setter como funciones inline que permiten un mejor funcionamiento
 * del programa.
*/
class paciente{
private:
    string _nombre; /*!< Nombre del paciente. */
    string _apellido; /*!< Apellido del paciente. */
    string _fecha; /*!< Fecha de nacimiento. */
    string _direccion; /*!< Direccion de residencia. */
    string _raza; /*!< Raza del paciente. */
    string _genero; /*!< Genero del paciente. */
    string _ingreso; /*!< Nivel de ingresos del paciente en COP (Como cadena de caracteres). */
    double _Doc; /*!< Documento de identidad del paciente. */
    double _Num_ing; /*!< Nivel de ingresos del paciente en COP (Como un double).  */

public:
    paciente();
    ~paciente();
    inline void setFecha(string fecha){  _fecha = fecha; }
    inline string getFecha() const { return _fecha; }
    inline void setDoc(double Doc){  _Doc = Doc; }
    inline double getDoc() const { return _Doc; }
    inline void setNombre(string nombre){  _nombre = nombre; }
    inline string getNombre() const { return _nombre; }
    inline void setApellido(string apellido){  _apellido = apellido; }
    inline string getApellido() const { return _apellido; }
    inline void setRaza(string raza){  _raza = raza; }
    inline string getRaza() const { return _raza; }
    inline void setGenero(string genero){  _genero = genero; }
    inline string getGenero() const { return _genero; }
    inline void setIngreso(double ingreso){  _Num_ing = ingreso; }
    inline double getIngreso() const { return _Num_ing; }
    inline void setDireccion(string direccion){  _direccion = direccion; }
    inline string getDireccion() const { return _direccion; }
};


#endif // PACIENTE_H
