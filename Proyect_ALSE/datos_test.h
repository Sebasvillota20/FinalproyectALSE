#ifndef DATOS_TEST_H
#define DATOS_TEST_H

#include <string>
#include <QMainWindow>
#include <iostream>
using namespace std;
/** @class Datos_test
 * @brief En esta definición de clase únicamente tenemos las funciones Get y Set de
 * los atributos que consideramos necesarios para guardar los datos de la
 * prueba en la base de datos.
 */
class Datos_test
{
public:

    Datos_test();
    inline void set_Doc(double doc){  _doc = doc; }
    inline double get_Doc() const { return _doc; }
    inline void set_Min(int min){  _min = min; }
    inline int get_Min() const { return _min; }
    inline void set_Seg(int seg){  _seg = seg; }
    inline int get_Seg() const { return _seg; }
    inline void set_Pos(int p){  _p = p; }
    inline int get_Pos() const { return _p; }
    inline void set_State(string stat){  _stat = stat; }
    inline string get_State() const { return _stat; }

private:
    int _min; /*!< Entero en el que guardamos el minuto en el que se oprimio el botón. */
    int _seg;  /*!< Entero en el que guardamos los segundos que llevaban de la prueba al oprimir el botón. */
    double _doc;  /*!< Con este podemos identificar que paciente fue el que realizo la prueba. */
    string _stat;  /*!< Con este indicamos si se oprimio el boton al momento de encenderse o si fallo en el intento. */
    int _p;
};

#endif // DATOS_TEST_H
