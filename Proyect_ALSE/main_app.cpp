#include "main_app.h"
#include "ui_main_app.h"
#include "plataforma.h"
#include "formulario.h"
/*!
 * En esta función configuramos el tamaño, color y figura de los botones
 * que se van a usar para la prueba de agilidad del paciente, además, se realizan
 * los connect que reciben las instrucciones emitidas por la funcion timeout
 * de la clase Qtimer, que son los "contadores" usados para el cambio de estados
 * en cada botón.
*/
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
/*!
 * El destructor de la clase, llamado cuando se acaben las instrucciones relacionadas
 * con esta clase.
*/
main_app::~main_app()
{
    delete ui;
}
/*!
 * Esta función recibe los datos del documento del paciente que realizara la prueba
 * y el tiempo que va a durar realizando esta misma.
*/
void main_app::recibo_Datos(int time_prueba, double pac){
    connect(retardo, &QTimer::timeout, this, &main_app::apagarboton ) ;
    tiempo_prueba->setInterval(time_prueba);
    tiempo_prueba->start();
    setcedula(pac);
    setTiempo(time_prueba);
}
/*!
 * Al momento de acabar el tiempo al que se configuró la prueba,
 * se llama a esta función para cerrar la base de datos y cerrar la
 * ventana tambien.
*/
void main_app::cerrarprueba(){
   _db.cerrarDB();
    close();
}
/*!
 * Esta función vuelve visible la ventana en la que ingresa un usuario
 * a la plataforma de registros, además, la vuelve modal.
*/
void main_app::Exect(){

    plataforma *ventana1=new plataforma;
    ventana1->setVisible(true);
    ventana1->isModal();

}
/*!
 * Esta función manda la información del paciente, el tiempo en el que se
 * oprimió un botón, cual boton oprimió y si era el correcto. Además, escoge
 * al azar un valor entre 1 y 11 para hacer que la prueba sea totalmente aleatoria
 * y no se repita ningún ciclo en los botones.
*/
void main_app::apagarboton(){
    _data.set_Doc(getcedula());
    _data.set_Pos(_estado);
    _data.set_State(CoI);
    _data.set_Min((getTiempo() - tiempo_prueba->remainingTime())/60000);
    _data.set_Seg((getTiempo() - tiempo_prueba->remainingTime())/1000);

    if(_db.abrirDB("base.db")==true){
        _db.guardad_Datos_test(_data);       
    }
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
/*!
 * La funcion controla los tiempos en los que se mantienen prendidos lo botones,
 * el color al que va a cambiar y actualiza el tiempo restante en la prueba de agilidad.
*/
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
/*!
 * Si este boton es oprimido en el momento correcto, se cuenta un acierto y
 * encia el mensaje "correcto" para que la base de datos lo registre.
*/
void main_app::on_bt1_clicked(){
    if(_estado==1){
        contador();
        CoI = "Correcto";
    }
}
/*!
 * Si este boton es oprimido en el momento correcto, se cuenta un acierto y
 * encia el mensaje "correcto" para que la base de datos lo registre.
*/
void main_app::on_bt2_clicked(){
    if(_estado==2){
        contador();
        CoI = "Correcto";
    }
}
/*!
 * Si este boton es oprimido en el momento correcto, se cuenta un acierto y
 * encia el mensaje "correcto" para que la base de datos lo registre.
*/
void main_app::on_bt3_clicked(){
    if(_estado==3){
        contador();
        CoI = "Correcto";
    }
}
/*!
 * Si este boton es oprimido en el momento correcto, se cuenta un acierto y
 * encia el mensaje "correcto" para que la base de datos lo registre.
*/
void main_app::on_bt4_clicked(){
    if(_estado==4){
        contador();
        CoI = "Correcto";
    }
}
/*!
 * Si este boton es oprimido en el momento correcto, se cuenta un acierto y
 * encia el mensaje "correcto" para que la base de datos lo registre.
*/
void main_app::on_bt5_clicked(){
    if(_estado==5){
        contador();
        CoI = "Correcto";
    }
}
/*!
 * Si este boton es oprimido en el momento correcto, se cuenta un acierto y
 * encia el mensaje "correcto" para que la base de datos lo registre.
*/
void main_app::on_bt6_clicked(){
    if(_estado==6){
        contador();
        CoI = "Correcto";
    }
}
/*!
 * Si este boton es oprimido en el momento correcto, se cuenta un acierto y
 * encia el mensaje "correcto" para que la base de datos lo registre.
*/
void main_app::on_bt7_clicked(){
    if(_estado==7){
        contador();
        CoI = "Correcto";
    }
}
/*!
 * Si este boton es oprimido en el momento correcto, se cuenta un acierto y
 * encia el mensaje "correcto" para que la base de datos lo registre.
*/
void main_app::on_bt8_clicked(){
    if(_estado==8){
        contador();
        CoI = "Correcto";
    }
}
/*!
 * Si este boton es oprimido en el momento correcto, se cuenta un acierto y
 * encia el mensaje "correcto" para que la base de datos lo registre.
*/
void main_app::on_bt9_clicked(){
    if(_estado==9){
        contador();
        CoI = "Correcto";
    }
}
/*!
 * Si este boton es oprimido en el momento correcto, se cuenta un acierto y
 * encia el mensaje "correcto" para que la base de datos lo registre.
*/
void main_app::on_bt10_clicked(){
    if(_estado==10){
        contador();
        CoI = "Correcto";
    }
}
/*!
 * Si este boton es oprimido en el momento correcto, se cuenta un acierto y
 * encia el mensaje "correcto" para que la base de datos lo registre.
*/
void main_app::on_bt11_clicked(){
    if(_estado==11){
        contador();
        CoI = "Correcto";
    }

}
/*!
 * Esta función informa del número de aciertos que lleva el paciente mientras
 * realiza la prueba de agilidad.
*/
void main_app::contador(){
    cont=cont+1;
    ui->aciertos_e->setText(QString::number(cont));
}


