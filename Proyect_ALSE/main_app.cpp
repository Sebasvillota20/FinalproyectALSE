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
    retardo=new QTimer(this);
    tiempo_prueba = new QTimer(this);
    _estado=1+ rand()%11;
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
    _timer->setInterval( 2000 );
    _timer->start();
    connect(_timer, &QTimer::timeout, this, &main_app::cambio_estado );
    connect(tiempo_prueba, &QTimer::timeout, this, &main_app::cerrarprueba );
}

main_app::~main_app()
{
    delete ui;
}

void main_app::recibo_Datos(int time_prueba, double pac){
    connect(retardo, &QTimer::timeout, this, &main_app::apagarboton ) ;
    tiempo_prueba->setInterval(time_prueba);
    tiempo_prueba->start();
    setcedula(pac);
    setTiempo(time_prueba);
}

void main_app::cerrarprueba(){
   _db.cerrarDB();
   cout << endl << "CIERRAAA" << endl ;
    close();

}

void main_app::Exect(){

    plataforma *ventana1=new plataforma;
    ventana1->setVisible(true);
    ventana1->isModal();

}

void main_app::apagarboton(){
    _data.set_Doc(getcedula());
    _data.set_Pos(_estado);
    _data.set_State(CoI);
    _data.set_Min((getTiempo() - tiempo_prueba->remainingTime())/60000);
    _data.set_Seg((getTiempo() - tiempo_prueba->remainingTime())/1000);

    if(_db.abrirDB("base.db")==true){
        _db.guardad_Datos_test(_data);       
    }
    cout << (getTiempo()) << "   "<< ((_data.get_Seg()+1)*1000)<< endl;
    if(getTiempo() == ((_data.get_Seg()+1)*1000))
    {
        main_app::disconnect(retardo, &QTimer::timeout, this, &main_app::apagarboton);
    }
    _estado=1+ rand()%11;
    ui->bt1->setStyleSheet("QPushButton{background-color: red}");
    ui->bt2->setStyleSheet("QPushButton{background-color: red}");
    ui->bt3->setStyleSheet("QPushButton{background-color: red}");
    ui->bt4->setStyleSheet("QPushButton{background-color: red}");
    ui->bt5->setStyleSheet("QPushButton{background-color: red}");
    ui->bt6->setStyleSheet("QPushButton{background-color: red}");
    ui->bt7->setStyleSheet("QPushButton{background-color: red}");
    ui->bt8->setStyleSheet("QPushButton{background-color: red}");
    ui->bt9->setStyleSheet("QPushButton{background-color: red}");
    ui->bt10->setStyleSheet("QPushButton{background-color: red}");
    ui->bt11->setStyleSheet("QPushButton{background-color: red}");
}

void main_app::cambio_estado(){
    switch ( _estado ) {
    case 1:
        CoI = "Incorrecto";
        ui->bt1->setStyleSheet("QPushButton{background-color: yellow}");
        retardo->setInterval(1000);
        retardo->start();
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));

        break;
    case 2:
        CoI = "Incorrecto";
        ui->bt2->setStyleSheet("QPushButton{background-color: yellow}");
        retardo->setInterval(1000);
        retardo->start();
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 3:
        CoI = "Incorrecto";
        ui->bt3->setStyleSheet("QPushButton{background-color: yellow}");
        retardo->setInterval(1000);
        retardo->start();
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 4:
        CoI = "Incorrecto";
        ui->bt4->setStyleSheet("QPushButton{background-color: yellow}");
        retardo->setInterval(1000);
        retardo->start();
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 5:
        CoI = "Incorrecto";
        ui->bt5->setStyleSheet("QPushButton{background-color: yellow}");
        retardo->setInterval(1000);
        retardo->start();
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 6:
        CoI = "Incorrecto";
        ui->bt6->setStyleSheet("QPushButton{background-color: yellow}");
        retardo->setInterval(1000);
        retardo->start();
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 7:
        CoI = "Incorrecto";
        ui->bt7->setStyleSheet("QPushButton{background-color: yellow}");
        retardo->setInterval(1000);
        retardo->start();
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 8:
        CoI = "Incorrecto";
        ui->bt8->setStyleSheet("QPushButton{background-color: yellow}");
        retardo->setInterval(1000);
        retardo->start();
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 9:
        CoI = "Incorrecto";
        ui->bt9->setStyleSheet("QPushButton{background-color: yellow}");
        retardo->setInterval(1000);
        retardo->start();
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 10:
        CoI = "Incorrecto";
        ui->bt10->setStyleSheet("QPushButton{background-color: yellow}");
        retardo->setInterval(1000);
        retardo->start();
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;
    case 11:
        CoI = "Incorrecto";
        ui->bt11->setStyleSheet("QPushButton{background-color: yellow}");
        retardo->setInterval(1000);
        retardo->start();
        _timer->setInterval( 1000 );
        _timer->start();
        ui->lineEdit->setText(QString::number(tiempo_prueba->remainingTime()/1000));
        break;

    default:
        break;
    }
}



void main_app::on_bt1_clicked(){
    if(_estado==1){
        contador();
        CoI = "Correcto";
    }
}

void main_app::on_bt2_clicked(){
    if(_estado==2){
        contador();
        CoI = "Correcto";
    }
}

void main_app::on_bt3_clicked(){
    if(_estado==3){
        contador();
        CoI = "Correcto";
    }
}

void main_app::on_bt4_clicked(){
    if(_estado==4){
        contador();
        CoI = "Correcto";
    }
}

void main_app::on_bt5_clicked(){
    if(_estado==5){
        contador();
        CoI = "Correcto";
    }
}

void main_app::on_bt6_clicked(){
    if(_estado==6){
        contador();
        CoI = "Correcto";
    }
}

void main_app::on_bt7_clicked(){
    if(_estado==7){
        contador();
        CoI = "Correcto";
    }
}

void main_app::on_bt8_clicked(){
    if(_estado==8){
        contador();
        CoI = "Correcto";
    }
}

void main_app::on_bt9_clicked(){
    if(_estado==9){
        contador();
        CoI = "Correcto";
    }
}

void main_app::on_bt10_clicked(){
    if(_estado==10){
        contador();
        CoI = "Correcto";
    }
}

void main_app::on_bt11_clicked(){
    if(_estado==11){
        contador();
        CoI = "Correcto";
    }

}

void main_app::contador(){
    cont=cont+1;
    ui->aciertos_e->setText(QString::number(cont));
}


