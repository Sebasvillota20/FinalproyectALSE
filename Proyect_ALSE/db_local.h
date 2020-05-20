#ifndef DB_LOCAL_H
#define DB_LOCAL_H
#include <sqlite3.h>
#include "usuario.h"
#include <string>
#include "paciente.h"
#include "datos_test.h"

using namespace std;
/** @class Db_local
 * @brief En esta clase definimos todas aquellas funciones que necesitamos
 * para comunicarnos con la base de datos, en este caso para abrirla,
 * cerrarla, guardar datos en ella, como los del usuarios y los pacientes
 * y calcular la edad del usuario
*/
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
    bool guardad_Datos_test(Datos_test &dat);
    bool guardarPaciente(paciente &pa);
    bool guardarUsuario( usuario &u);
    bool calcularedad(usuario &u);
    bool comprCed(usuario &u);
    bool verificarUsuario(usuario &u);
    bool cerrarDB();
};

#endif // DB_LOCAL_H
