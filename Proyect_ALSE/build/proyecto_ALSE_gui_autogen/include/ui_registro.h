/********************************************************************************
** Form generated from reading UI file 'registro.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRO_H
#define UI_REGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registro
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *nombre_r;
    QLabel *label_4;
    QPushButton *registro_r;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *doc_r;
    QPushButton *cancelar_r;
    QLineEdit *fecha_r;
    QLineEdit *apellido_r;
    QLabel *label_8;
    QLineEdit *Com_fecha;
    QLineEdit *pasword_r;
    QLineEdit *User_r;
    QLabel *label_6;
    QLabel *label_5;

    void setupUi(QWidget *registro)
    {
        if (registro->objectName().isEmpty())
            registro->setObjectName(QStringLiteral("registro"));
        registro->resize(321, 340);
        layoutWidget = new QWidget(registro);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 298, 297));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nombre_r = new QLineEdit(layoutWidget);
        nombre_r->setObjectName(QStringLiteral("nombre_r"));

        gridLayout->addWidget(nombre_r, 1, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        registro_r = new QPushButton(layoutWidget);
        registro_r->setObjectName(QStringLiteral("registro_r"));
        registro_r->setEnabled(false);

        gridLayout->addWidget(registro_r, 9, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 2);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 3);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 2);

        doc_r = new QLineEdit(layoutWidget);
        doc_r->setObjectName(QStringLiteral("doc_r"));

        gridLayout->addWidget(doc_r, 3, 0, 1, 1);

        cancelar_r = new QPushButton(layoutWidget);
        cancelar_r->setObjectName(QStringLiteral("cancelar_r"));

        gridLayout->addWidget(cancelar_r, 9, 1, 1, 2);

        fecha_r = new QLineEdit(layoutWidget);
        fecha_r->setObjectName(QStringLiteral("fecha_r"));

        gridLayout->addWidget(fecha_r, 5, 0, 1, 1);

        apellido_r = new QLineEdit(layoutWidget);
        apellido_r->setObjectName(QStringLiteral("apellido_r"));

        gridLayout->addWidget(apellido_r, 1, 1, 1, 2);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 4, 2, 1, 1);

        Com_fecha = new QLineEdit(layoutWidget);
        Com_fecha->setObjectName(QStringLiteral("Com_fecha"));
        Com_fecha->setEnabled(false);

        gridLayout->addWidget(Com_fecha, 5, 2, 1, 1);

        pasword_r = new QLineEdit(layoutWidget);
        pasword_r->setObjectName(QStringLiteral("pasword_r"));
        pasword_r->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(pasword_r, 7, 2, 1, 1);

        User_r = new QLineEdit(layoutWidget);
        User_r->setObjectName(QStringLiteral("User_r"));
        User_r->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(User_r, 7, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 6, 2, 1, 1);


        retranslateUi(registro);

        QMetaObject::connectSlotsByName(registro);
    } // setupUi

    void retranslateUi(QWidget *registro)
    {
        registro->setWindowTitle(QApplication::translate("registro", "Form", Q_NULLPTR));
        label_4->setText(QApplication::translate("registro", "Nombre:", Q_NULLPTR));
        registro_r->setText(QApplication::translate("registro", "Registrar", Q_NULLPTR));
        label->setText(QApplication::translate("registro", "Apellido:", Q_NULLPTR));
        label_7->setText(QApplication::translate("registro", "Finalizar:", Q_NULLPTR));
        label_2->setText(QApplication::translate("registro", "Documento de identidad:", Q_NULLPTR));
        label_3->setText(QApplication::translate("registro", "Fecha de nacimiento:", Q_NULLPTR));
        cancelar_r->setText(QApplication::translate("registro", "Cancelar", Q_NULLPTR));
        label_8->setText(QApplication::translate("registro", "(AAAA-MM-DD)", Q_NULLPTR));
        label_6->setText(QApplication::translate("registro", "Usuario:", Q_NULLPTR));
        label_5->setText(QApplication::translate("registro", "Contrase\303\261a:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class registro: public Ui_registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_H
