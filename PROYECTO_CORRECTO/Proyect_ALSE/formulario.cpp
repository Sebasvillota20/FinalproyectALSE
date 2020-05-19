#include "formulario.h"
#include "ui_formulario.h"
#include "main_app.h"
#include "plataforma.h"

formulario::formulario(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::formulario)
{
    ui->setupUi(this);
   // plataforma *platf = new plataforma;
   // platf->setVisible(true);
   // platf->isModal();
   // platf->show();
    connect(ui->salir_f,SIGNAL(clicked()),this,SLOT(close()));
    ui->Genero_r->addItem(" - ");
    ui->Genero_r->addItem("Masculino");
    ui->Genero_r->addItem("Femenino");
    ui->Raza_r->addItem(" - ");
    ui->Raza_r->addItem("Mestizo");
    ui->Raza_r->addItem("Caucásicos");
    ui->Raza_r->addItem("Indigenas");
    ui->Raza_r->addItem("Afrocolombiana");
    ui->Raza_r->addItem(" Raizal ");
    ui->Raza_r->addItem(" Gitano ");
    ui->Raza_r->addItem(" Palenquero ");
    ui->Raza_r->addItem(" Otro ");
   //
    //cout<< platf->get_nombreU()<< endl;
   // cout<< plat.get_nombreU()<< endl;

}


void formulario::reciboDatos(string f, int d){
    set_nombreU(f);
    set_edad(d);
    ui->_nombre_usu->setText(QString::fromStdString(get_nombreU()));
    ui->_edad_usuar->setText(QString::number(get_edad()));
}



formulario::~formulario()
{
    delete ui;
}

void formulario::on_iniciar_f_clicked(){
    main_app *ventana1=new main_app;
    _pac.setNombre(ui->nombre_f->text().toStdString());
    _pac.setApellido(ui->apellido_f->text().toStdString());
    _pac.setDireccion(ui->direccion_f->text().toStdString());
    _pac.setGenero(ui->Genero_r->currentText().toStdString());
    _pac.setRaza(ui->Raza_r->currentText().toStdString());
    _pac.setDoc(ui->doc_f->text().toDouble());
    _pac.setIngreso(ui->nivel_f->text().toDouble());
    _pac.setFecha(ui->fecha_f->text().toStdString());
    _db.abrirDB("base.db");
    _db.guardarPaciente(_pac);
    _db.cerrarDB();
    connect( this,  &formulario::enviar_Datostiempo ,ventana1, &main_app::recibo_Datos );
    emit enviar_Datostiempo(_timer2, _pac.getDoc());
    ventana1->show();
    ui->apellido_f->clear();
    ui->direccion_f->clear();
    ui->doc_f->clear();
    ui->fecha_f->clear();
    ui->Raza_r->setCurrentIndex(0);
    ui->Genero_r->setCurrentIndex(0);
    ui->nombre_f->clear();
    ui->nivel_f->clear();
    ui->_time30->setAutoExclusive(false);
    ui->_time30->setChecked(false);
    ui->_time30->setAutoExclusive(true);
    ui->_time1m->setAutoExclusive(false);
    ui->_time1m->setChecked(false);
    ui->_time1m->setAutoExclusive(true);
    ui->_time2m->setAutoExclusive(false);
    ui->_time2m->setChecked(false);
    ui->_time2m->setAutoExclusive(true);
}



void formulario::on_salir_f_clicked(){
    plataforma *ventana1=new plataforma;
    ventana1->show();
}




void formulario::on_nombre_f_textChanged(const QString &arg1)
{
    on__time2m_clicked();
}

void formulario::on_apellido_f_textChanged(const QString &arg1)
{
    on__time2m_clicked();
}

void formulario::on_doc_f_textChanged(const QString &arg1)
{
    on__time2m_clicked();
}

void formulario::on_fecha_f_textChanged(const QString &arg1)
{
    on__time2m_clicked();
}

void formulario::on_direccion_f_textChanged(const QString &arg1)
{
    on__time2m_clicked();
}

void formulario::on_nivel_f_textChanged(const QString &arg1)
{
    on__time2m_clicked();
}

void formulario::on__time1m_clicked()
{
    on__time2m_clicked();
    _timer2 = 60000;
}

void formulario::on__time2m_clicked()
{
    _timer2 = 120000;
    char a,b;
     ui->iniciar_f->setEnabled(false);
   if(ui->_time30->isChecked() || ui->_time2m->isChecked() || ui->_time1m->isChecked())
    if(ui->apellido_f->text() != "")
        if(ui->direccion_f->text() != "")
            if(ui->doc_f->text() != "")
                if(ui->nombre_f->text() != "")
                    if(ui->fecha_f->text() != "")
                        if(ui->Genero_r->currentText() != " - ")
                            if(ui->Raza_r->currentText() != " - ")
                                if(ui->nivel_f->text() != "")
                                    ui->iniciar_f->setEnabled(true);

    _pac.setFecha(ui->fecha_f->text().toStdString());
    a = _pac.getFecha()[4];
    b = _pac.getFecha()[7];
    if( a != '-' || b != '-' || _pac.getFecha().size() != 10)
    {
        ui->iniciar_f->setEnabled(false);

    }
}

void formulario::on__time30_clicked()
{
    on__time2m_clicked();
    _timer2 = 30000;
}
