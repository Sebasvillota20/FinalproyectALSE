#include "db_local.h"
#include <iostream>
#include <sstream>
#include "usuario.h"
#include "paciente.h"
#include <string>


Db_local::Db_local()
{

}

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

bool Db_local::guardad_Datos_test(Datos_test &dat){
    char *zErrMsg = 0;
    int rc;
    std::stringstream sql;
    /* Create SQL statement */
    sql <<"INSERT INTO prueba (doc, minuto, segundo, estado, pocision) VALUES (";
    sql << dat.get_Doc() << "," << dat.get_Min() << "," << dat.get_Seg() << ",'" << dat.get_State() << "',"<< dat.get_Pos();
    sql << ");";
    std::cout << sql.str() << std::endl;
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


bool Db_local::guardarPaciente(paciente &pa){

    char *zErrMsg = 0;
    int rc;
    std::stringstream sql;
    /* Create SQL statement */
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

int Db_local::comprobarCed(void *data, int argc, char **argv, char **azColName){
    bool* d = (bool*) data;
    *d = true;
    cout << d;
    return 0;
}

int Db_local::ingresoUsuario(void *data, int argc, char **argv, char **azColName){
    bool* d = (bool*) data;
    *d = true;
    return 0;
}

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

int Db_local::call_edad(void *data, int argc, char **argv, char **azColName){
    usuario* d = (usuario*) data;
   d->set_edad(stoi(argv[0]));
    return 0;
}

bool Db_local::cerrarDB(){
    sqlite3_close( db );
}
