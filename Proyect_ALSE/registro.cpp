#include "registro.h"
#include "ui_registro.h"
#include "plataforma.h"
#include <iostream>
#include <sstream>
/*!
 * Esta función inicializa los procesos que se van a realizar
 * con esta clase.
*/
registro::registro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registro)
{
    ui->setupUi(this);
    connect(ui->cancelar_r,SIGNAL(clicked()),this,SLOT(close()));
}
/*!
 * El destructor de una clase elimina las variables temporales
 * que se hayan usado para hacer algún calculo y que ya no se necesiten.
*/
registro::~registro()
{
    delete ui;
}
/*!
 * Cuando se oprima el botón cancelar de la GUI de esta
 * clase se mostrará la ventana de ingreso a la plataforma
 * de registro de pacientes.
*/
void registro::on_cancelar_r_clicked(){
    plataforma *ventana1= new plataforma;
    ventana1->show();
}
/*!
 * Cuando se oprima el botón de registro, esta función
 * enviará los datos ingresados en las QLineEdit para
 * guardar su información en la base de datos.
*/
void registro::on_registro_r_clicked()
{
    _user.setDoc(ui->doc_r->text().toDouble());
    _user.setNombre(ui->nombre_r->text().toStdString());
    _user.setApellido(ui->apellido_r->text().toStdString());
    _user.setContrasena(ui->pasword_r->text().toStdString());
    _user.setFecha(ui->fecha_r->text().toStdString());
    _user.set_Usuario(ui->User_r->text().toStdString());
    _db.abrirDB("base.db");
    _db.guardarUsuario(_user);
    _db.cerrarDB();
    plataforma *ventana1= new plataforma;
    ventana1->show();
    close();
}
/*!
 * En esta función se verifica que no haya ningún campo
 * vacío en la ventana y que la informacion haya sido
 * ingresada tal como se espera, para habilitar el botón
 * de registro.
*/
void registro::on_nombre_r_editingFinished()
{
    char a,b;
    ui->registro_r->setEnabled(false);
    if(ui->apellido_r->text() != "")
        if(ui->doc_r->text() != "")
            if(ui->fecha_r->text() != "")
                if(ui->nombre_r->text() != "")
                    if(ui->pasword_r->text() != "")
                        ui->registro_r->setEnabled(true);


    _user.setFecha(ui->fecha_r->text().toStdString());
    a = _user.getFecha()[4];
    b = _user.getFecha()[7];
    if( a != '-' || b != '-' || _user.getFecha().size() != 10)
    {
        ui->registro_r->setEnabled(false);

    }


}
/*!
 * Esta función busca verificar que la información ingresada
 * haya sido escrita correctamente, se llama a la función
 * on_nombre_r_editingFinished para lograr este objetivo.
*/
void registro::on_apellido_r_textChanged(const QString &arg1)
{
    on_nombre_r_editingFinished();
}
/*!
 * Esta función busca verificar que la información ingresada
 * haya sido escrita correctamente, se llama a la función
 * on_nombre_r_editingFinished para lograr este objetivo.
*/
void registro::on_pasword_r_textChanged(const QString &arg1)
{
    on_nombre_r_editingFinished();
}
/*!
 * Esta función busca verificar que la información ingresada
 * haya sido escrita correctamente, se llama a la función
 * on_nombre_r_editingFinished para lograr este objetivo.
*/
void registro::on_fecha_r_textChanged(const QString &arg1)
{
     on_nombre_r_editingFinished();
}
/*!
 * Cuando se acabe de ingresar el Documento de Identidad
 * del usuario que se quiere registrar esta función verifica
 * que la cédula ingresada no haya sido guardada en la base de
 * datos anteriormente, si este es el caso, se informa que es una
 * cédula ya ingresada e impide el registro del usuario.
*/
void registro::on_doc_r_textChanged(const QString &arg1)
{
     on_nombre_r_editingFinished();
    _user.setDoc(ui->doc_r->text().toDouble());
     _db.abrirDB("base.db");
     if(_db.comprCed(_user)== true){
         ui->Com_fecha->setText("Cedula Ya Registrada");
         ui->registro_r->setEnabled(false);
         _db.cerrarDB();

     }
     else if(_db.comprCed(_user)== false){
         ui->Com_fecha->setText("Cedula Correcta");
         _db.cerrarDB();
     }
}
