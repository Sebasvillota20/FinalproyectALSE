#include "main_app.h"
#include "ui_main_app.h"
#include "plataforma.h"
#include "formulario.h"

main_app::main_app(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main_app)
{
    ui->setupUi(this);
    _timer=new QTimer(this);
    tiempo_prueba = new QTimer(this);
    _estado=3;
    t=clock();
    ui->bt1->setFixedHeight(40);
    ui->bt1->setFixedWidth(40);
    ui->bt2->setFixedHeight(40);
    ui->bt2->setFixedWidth(40);
    ui->bt3->setFixedHeight(40);
    ui->bt3->setFixedWidth(40);
    ui->bt3->setFixedHeight(40);
    ui->bt3->setFixedWidth(40);
    ui->bt4->setFixedHeight(40);
    ui->bt4->setFixedWidth(40);
    ui->bt5->setFixedHeight(40);
    ui->bt5->setFixedWidth(40);
    ui->bt6->setFixedHeight(40);
    ui->bt6->setFixedWidth(40);
    ui->bt7->setFixedHeight(40);
    ui->bt7->setFixedWidth(40);
    ui->bt8->setFixedHeight(40);
    ui->bt8->setFixedWidth(40);
    ui->bt9->setFixedHeight(40);
    ui->bt9->setFixedWidth(40);
    ui->bt10->setFixedHeight(40);
    ui->bt10->setFixedWidth(40);
    ui->bt11->setFixedHeight(40);
    ui->bt11->setFixedWidth(40);
    ui->bt1->setMask(QRegion(ui-> bt1 -> geometry (), QRegion :: Ellipse));
    ui->bt2->setMask(QRegion(ui-> bt2 -> geometry (), QRegion :: Ellipse));
    ui->bt3->setMask(QRegion(ui-> bt3 -> geometry (), QRegion :: Ellipse));
    ui->bt4->setMask(QRegion(ui-> bt4 -> geometry (), QRegion :: Ellipse));
    ui->bt5->setMask(QRegion(ui-> bt5 -> geometry (), QRegion :: Ellipse));
    ui->bt6->setMask(QRegion(ui-> bt6 -> geometry (), QRegion :: Ellipse));
    ui->bt7->setMask(QRegion(ui-> bt7 -> geometry (), QRegion :: Ellipse));
    ui->bt8->setMask(QRegion(ui-> bt8 -> geometry (), QRegion :: Ellipse));
    ui->bt9->setMask(QRegion(ui-> bt9 -> geometry (), QRegion :: Ellipse));
    ui->bt10->setMask(QRegion(ui-> bt10-> geometry (), QRegion :: Ellipse));
    ui->bt11->setMask(QRegion(ui-> bt11-> geometry (), QRegion :: Ellipse));
    connect(_timer, &QTimer::timeout, this, &main_app::cambio_estado );
    _timer->setInterval( 1000 );
    _timer->start();
}

main_app::~main_app()
{
    delete ui;
}

void main_app::recibo_Datos(int time_prueba, double pac){
    connect(tiempo_prueba, &QTimer::timeout, this, &main_app::close );
    tiempo_prueba->setInterval(time_prueba);
    tiempo_prueba->start();
    setcedula(pac);

}

void main_app::cerrarprueba(){
    close();
}

void main_app::Exect(){

    plataforma *ventana1=new plataforma;
    ventana1->setVisible(true);
    ventana1->isModal();

}

void main_app::cambio_estado(){
    switch ( _estado ) {
    case 1:
        _estado=11;
        ui->bt1->setStyleSheet("QPushButton{background-color: yellow}");
        ui->bt4->setStyleSheet("QPushButton{background-color: red}");
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 2:
        _estado=8;
        ui->bt2->setStyleSheet("QPushButton{background-color: yellow}");
        ui->bt6->setStyleSheet("QPushButton{background-color: red}");
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 3:
        _estado=10;
        ui->bt3->setStyleSheet("QPushButton{background-color: yellow}");
        ui->bt8->setStyleSheet("QPushButton{background-color: red}");
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 4:
        _estado=1;
        ui->bt4->setStyleSheet("QPushButton{background-color: yellow}");
        ui->bt5->setStyleSheet("QPushButton{background-color: red}");
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 5:
        _estado=4;
        ui->bt5->setStyleSheet("QPushButton{background-color: yellow}");
        ui->bt7->setStyleSheet("QPushButton{background-color: red}");
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 6:
        _estado=2;
        ui->bt6->setStyleSheet("QPushButton{background-color: yellow}");
        ui->bt9->setStyleSheet("QPushButton{background-color: red}");
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 7:
        _estado=5;
        ui->bt7->setStyleSheet("QPushButton{background-color: yellow}");
        ui->bt10->setStyleSheet("QPushButton{background-color: red}");
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 8:
        _estado=3;
        ui->bt8->setStyleSheet("QPushButton{background-color: yellow}");
        ui->bt2->setStyleSheet("QPushButton{background-color: red}");
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 9:
        _estado=6;
        ui->bt9->setStyleSheet("QPushButton{background-color: yellow}");
        ui->bt11->setStyleSheet("QPushButton{background-color: red}");
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 10:
        _estado=7;
        ui->bt10->setStyleSheet("QPushButton{background-color: yellow}");
        ui->bt3->setStyleSheet("QPushButton{background-color: red}");
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 11:
        _estado=9;
        ui->bt11->setStyleSheet("QPushButton{background-color: yellow}");
        ui->bt1->setStyleSheet("QPushButton{background-color: red}");
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    default:
        break;
    }
}

void main_app::on_bt1_clicked(){
    if(_estado==11){
        contador();
    }
}

void main_app::on_bt2_clicked(){
    if(_estado==8){
        contador();
    }
}

void main_app::on_bt3_clicked(){
    if(_estado==10){
        contador();
    }
}

void main_app::on_bt4_clicked(){
    if(_estado==1){
        contador();
    }
}

void main_app::on_bt5_clicked(){
    if(_estado==4){
        contador();
    }
}

void main_app::on_bt6_clicked(){
    if(_estado==2){
        contador();
    }
}

void main_app::on_bt7_clicked(){
    if(_estado==5){
        contador();
    }
}

void main_app::on_bt8_clicked(){
    if(_estado==3){
        contador();
    }
}

void main_app::on_bt9_clicked(){
    if(_estado==6){
        contador();
    }
}

void main_app::on_bt10_clicked(){
    if(_estado==7){
        contador();
    }
}

void main_app::on_bt11_clicked(){
    if(_estado==9){
        contador();
        //llamar tiempo y guarddar en base de datos y mostrar en formulario
    }
    if(_estado==11){
        //obtener la hora de click y restarle la hora de inicio
        //Db_local::guardar_datos(contador() &ex)
    }
}

void main_app::contador(){
    cont=cont+1;
    ui->aciertos_e->setText(QString::number(cont));
    setTiempo(t);
}


