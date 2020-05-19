#ifndef DATOS_TEST_H
#define DATOS_TEST_H

#include <string>
#include <QMainWindow>
#include <iostream>
using namespace std;

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
    int _min;
    int _seg;
    double _doc;
    string _stat;
    int _p;
};

#endif // DATOS_TEST_H
