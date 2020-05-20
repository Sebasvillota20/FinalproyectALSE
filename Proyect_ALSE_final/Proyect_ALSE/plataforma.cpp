#include "plataforma.h"
#include "ui_plataforma.h"
#include "registro.h"
#include "formulario.h"
#include <string>
#include "db_local.h"
/*!
 * Esta funcion inicializa los procesos que se vayan a
 * realizar en la GUI de esta clase.
*/
plataforma::plataforma(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plataforma)
{
    ui->setupUi(this);
    connect(ui->registro_p,SIGNAL(clicked()),this,SLOT(close()));
}
/*!
 * El destructor de esta clase destruye todas las variables que se hayan usado
 * en algún proceso que realice una función y ya no sea necesaria. Libera recursos.
*/
plataforma::~plataforma()
{
    delete ui;
}
/*!
 * Al momento de oprimir el boton registro de la GUI de esta clase
 * se abre una ventana que pertenece a la clase registro.
*/
void plataforma::on_registro_p_clicked(){

    registro *ventana1=new registro;

    ventana1->show();

}
/*!
 * Al momento de oprimir el botón ingreso esta función envía los
 * datos ingresados en las QLineEdit para verificar si existe algún
 * registro con el usuario y contraseña especificados para poder dar
 * paso al registro de pacientes. Además, se envían los datos de nombre
 * y edad del usuario a la siguiente ventana.
*/
void plataforma::on_ingreso_p_clicked(){

     formulario *ventana1= new formulario;
     connect( this,  &plataforma::enviarDatos ,ventana1, &formulario::reciboDatos );
     _user.set_Usuario(ui->nombre_p->text().toStdString());
     _user.setContrasena(ui->password_p->text().toStdString());
     _db.abrirDB("base.db");
     if(_db.verificarUsuario(_user)== true){
         _db.calcularedad(_user);
         emit enviarDatos(_user.get_Usuario(), _user.get_edad());
         set_edadU(_user.get_edad());
         set_nombreU(_user.get_Usuario());
         ventana1->show();
         close();
     }

     else if(_db.verificarUsuario(_user)== false){
         ui->Restriccion_p->setText("Contraseña y/o Usuario incorrecto");
         ui->nombre_p->clear();
         ui->password_p->clear();
     }

    _db.cerrarDB();

}
