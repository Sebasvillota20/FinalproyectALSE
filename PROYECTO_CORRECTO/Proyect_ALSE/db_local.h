#ifndef DB_LOCAL_H
#define DB_LOCAL_H
#include <sqlite3.h>
#include "usuario.h"
#include <string>
#include "paciente.h"

using namespace std;

class Db_local
{
private:

    sqlite3 *db;

    static int agregarPaciente(void *data, int argc, char **argv, char **azColName);
    static int ingresoUsuario(void *data, int argc, char **argv, char **azColName);
    static int comprobarCed(void *data, int argc, char **argv, char **azColName);
    static int call_edad(void *data, int argc, char **argv, char **azColName);

public:
    Db_local();    
     bool abrirDB( string path );
   //  bool guardar_datos(examen &ex);
     bool guardarPaciente(paciente &pa);
     bool guardarUsuario( usuario &u);
     bool calcularedad(usuario &u);
     bool comprCed(usuario &u);
     bool verificarUsuario(usuario &u);
     bool cerrarDB();
};

#endif // DB_LOCAL_H
