#ifndef REGISTRO_H
#define REGISTRO_H

#include <QWidget>
#include "db_local.h"
#include "usuario.h"


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
    Ui::registro *ui;
    Db_local       _db;
    usuario         _user;
};

#endif // REGISTRO_H
