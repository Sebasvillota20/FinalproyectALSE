#ifndef REGISTRO_H
#define REGISTRO_H
#include <QWidget>
#include "db_local.h"
#include "usuario.h"
/** @class registro
 * @brief Esta clase es la responsable de registrar un usuario
 * en el sistema y de guardar sus datos básicos, verificando
 * que su cédula no se haya registrado anteriormente, en el caso
 * que se encuentre esta cédula en la base de datos se le informará
 * de este error por medio de la GUI.
*/
namespace Ui {
class registro;
}

class registro : public QWidget
{
    Q_OBJECT

public:
    explicit registro(QWidget *parent = 0);
    ~registro();

private slots:
    void on_cancelar_r_clicked();
    void on_registro_r_clicked();
    void on_nombre_r_editingFinished();
    void on_apellido_r_textChanged(const QString &arg1);
    void on_pasword_r_textChanged(const QString &arg1);
    void on_fecha_r_textChanged(const QString &arg1);
    void on_doc_r_textChanged(const QString &arg1);

private:
    Ui::registro *ui; /*!< Puntero que permite abrir y cerrar ventanas de esta clase. */
    Db_local       _db; /*!< Esta variable nos parmite llamar las funciones de la clase Db_local. */
    usuario         _user; /*!< Este tipo de variable nos permite guardar los datos básicos ingresados. */
};

#endif // REGISTRO_H
