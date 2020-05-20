#include "db_local.h"
#include <iostream>
#include <sstream>
#include "usuario.h"
#include "paciente.h"
#include <string>

Db_local::Db_local()
{

}
/*!
 * abrirDB nos ayuda a abrir la base de datos con la direccion
 * que le hemos dado y nos devuelve un mensaje de error en el
 * caso en que el path no encuentre ninguna base de datos.
*/
bool Db_local::abrirDB( string path ){

    int rc;

    /* Open database */
    rc = sqlite3_open( path.c_str() , &db);
    
    if( rc ) {
       fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
       return false;
    }else
       // fprintf(stderr, "Opened database successfully\n");

    return true;

}
/*!
 * Esta funcion es llamada cuando el paciente esta haciendo la
 * prueba y acierta o falla en oprimirlo, se guarda en la base de
 * datos el documento del paciente, minuto y segundo de la prueba
 * en la que se oprimio el boton, si lo oprimio y cual boton debia oprimir.
*/
bool Db_local::guardad_Datos_test(Datos_test &dat){
    char *zErrMsg = 0;
    int rc;
    std::stringstream sql;
    /* Create SQL statement */
    sql <<"INSERT INTO prueba (doc, minuto, segundo, estado, pocision) VALUES (";
    sql << dat.get_Doc() << "," << dat.get_Min() << "," << dat.get_Seg() << ",'" << dat.get_State() << "',"<< dat.get_Pos();
    sql << ");";
    /* Execute SQL statement */
    rc = sqlite3_exec(db, sql.str().c_str(), 0, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return false;
    } else {
       //fprintf(stdout, "Records created successfully\n");
    }
    return true;
}
/*!
 * Esta funcion es llamada cada vez que un usuario llene la
 * información socio demógrafica de un paciente y oprima el botón
 * de iniciar la prueba, los datos ingresados sen enviaran a esta
 * función y esta los guardara en la base de datos "base.db". En
 * caso de que haya un error con el envio de datos, se informará
 * al usuario por medio de la terminal.
*/
bool Db_local::guardarPaciente(paciente &pa){

    char *zErrMsg = 0;
    int rc;
    std::stringstream sql;
    /*Create SQL statement */
    sql << "INSERT INTO paciente (nombre, apellido, doc, fecha, direccion, raza, genero, nivel) VALUES ('" ;
    sql << pa.getNombre() << "', '" << pa.getApellido() << "', " << pa.getDoc() ;
    sql <<", date('" << pa.getFecha() << "'), '" << pa.getDireccion();
    sql << "', '" << pa.getRaza() << "', '" << pa.getGenero() <<"', " << pa.getIngreso() << ");";

   // std::cout << sql.str() << std::endl;
    /* Execute SQL statement */
    rc = sqlite3_exec(db, sql.str().c_str(), 0, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return false;
    } else {
       //fprintf(stdout, "Records created successfully\n");
    }
    return true;

}
/*!
 * Esta función es llamada cuando se oprime el botón de registro
 * en la ventana llamada registro, se recibe la informacion de tipo
 * usuario y se envie a la base de datos con la instruccion
 * INSERT INTO indicando cuales son los datos an enviar, seguida de la
 * inctruccion VALUES en donde enviamos los datos recibidos.
*/
bool Db_local::guardarUsuario(usuario &p){

   //`nombre` TEXT NOT NULL, `apellido` TEXT NOT NULL, `doc` INTEGER NOT NULL, `fecha` NUMERIC NOT NULL, `contraseña` TEXT NOT NULL )
    char *zErrMsg = 0;
    int rc;

    std::stringstream sql;
    /* Create SQL statement */
    sql << "INSERT INTO usuario (nombre, apellido, doc, fecha, contra, usuar) VALUES ('" ;

    sql << p.getNombre() << "', '" <<  p.getApellido() << "', " << p.getDoc() << ", date('" << p.getFecha() << "'), '" ;
    sql << p.getContrasena() << "','" << p.get_Usuario()<< "');";



    /* Execute SQL statement */
    rc = sqlite3_exec(db, sql.str().c_str(), 0, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return false;
    } else {
       //fprintf(stdout, "Records created successfully\n");
    }
    return true;
}
/*!
 * Esta función llamada se usa en comprCed cuando se requiere la verificación
 * de la informacion que se le envió.
*/
int Db_local::comprobarCed(void *data, int argc, char **argv, char **azColName){
    bool* d = (bool*) data;
    *d = true;
    cout << d;
    return 0;
}
/*!
 * Llamada por ingreso usuario, lo que hace es cambiar el booleano que
 * llega por un true, ya que en la base de datos se encontró al menos
 * un registro en el que se encuentra usuario y contraseña ingresado.
*/
int Db_local::ingresoUsuario(void *data, int argc, char **argv, char **azColName){
    bool* d = (bool*) data;
    *d = true;
    return 0;
}
/*!
 * Esta función nos ayuda a verificar que un usuario no ingrese su cédula más de
 * una vez, pues usamos este dato como el PRIMARY KEY de la tabla "usuario" y si tenemos
 * dos usuarios con la misma cédula generaríamos un error.
*/
bool Db_local::comprCed(usuario &u){
    char *zErrMsg = 0;
    int rc, num;
    bool compr = false;
    num = (int) u.getDoc();
    std::stringstream sql;
     sql << "SELECT * FROM usuario WHERE doc = "<< num<<";";
     /* Execute SQL statement */
     rc = sqlite3_exec(db, sql.str().c_str(), comprobarCed, (void*)&compr, &zErrMsg);

     if( rc != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
        return false;
     }
     return compr;
}
/*!
 * Función llamada a la hora de permitir el acceso a un usuario al formulario
 * para registrar nuevos pacientes y realizar la prueba. Arroja un booleano con
 * el valor de true en el caso en el que si se encuentre un registro con los datos
 * ingresados en la ventana plataforma, de lo contrario, envía un false indicando
 * que el usuario o la contraseña no se encuentran en el registro de la base de datos
 * en la tabla usuario.
*/
bool Db_local::verificarUsuario(usuario &u){
    char *zErrMsg = 0;
    int rc;
    bool comparar = false;

    std::stringstream sql;
    sql << "SELECT * FROM usuario WHERE (usuar ='"<< u.get_Usuario() << "'and contra ='" << u.getContrasena() << "');";
  //  std::cout << sql.str() << std::endl;
    rc = sqlite3_exec(db, sql.str().c_str(), ingresoUsuario, (void*)&comparar, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return false;
    }
    return comparar;
}
/*!
 * Función que realiza calculo de la edad del usuario utilizando la
 * contraseña y el usuario como referentes para encontrar la fecha de
 * nacimiento y restarsela a la fecha actual en la que nos encontramos.
 * Llama a la función call_edad para asignar el valor encontrado a un entero
 * y así enviar el resultado a la ventana formulario.
*/
bool Db_local::calcularedad(usuario &u){
    char *zErrMsg = 0;
    int rc;
    //SELECT (julianday('now') - julianday(fecha))/365 FROM usuario WHERE doc = 123456;

    std::stringstream sql;
    sql << "SELECT (julianday('now') - julianday(fecha))/365 FROM usuario WHERE (usuar = '";
    sql << u.get_Usuario() << "'and contra ='" << u.getContrasena() << "');";
 //   std::cout << sql.str() << std::endl;
     rc = sqlite3_exec(db, sql.str().c_str(), call_edad, (void*)&u, &zErrMsg);

     /* Execute SQL statement */
     rc = sqlite3_exec(db, sql.str().c_str(), 0, 0, &zErrMsg);

     if( rc != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
        return false;
     } else {
        //fprintf(stdout, "Records created successfully\n");
     }
     return true;
}
/*!
 * Esta función ingresa el valor que se calculo en la base de datos
 * de la edad del usuario que ingreso al sistema en la funcion Set_edad
 * del usuario.
*/
int Db_local::call_edad(void *data, int argc, char **argv, char **azColName){
    usuario* d = (usuario*) data;
   d->set_edad(stoi(argv[0]));
    return 0;
}
/*!
 * Cierra la base de datos que hemos estado usando.
*/
bool Db_local::cerrarDB(){
    sqlite3_close( db );
}
