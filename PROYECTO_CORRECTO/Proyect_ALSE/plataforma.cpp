#include "plataforma.h"
#include "ui_plataforma.h"
#include "registro.h"
#include "formulario.h"
#include <string>
#include "db_local.h"

plataforma::plataforma(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plataforma)
{
    ui->setupUi(this);
    connect(ui->registro_p,SIGNAL(clicked()),this,SLOT(close()));
}

plataforma::~plataforma()
{
    delete ui;
}

void plataforma::on_registro_p_clicked(){

    registro *ventana1=new registro;

    ventana1->show();

}


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
