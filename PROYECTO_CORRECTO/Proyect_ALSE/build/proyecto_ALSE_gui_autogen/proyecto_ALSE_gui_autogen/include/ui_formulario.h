/********************************************************************************
** Form generated from reading UI file 'formulario.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULARIO_H
#define UI_FORMULARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formulario
{
public:
    QComboBox *Raza_r;
    QLabel *label_7;
    QLineEdit *nivel_f;
    QSplitter *splitter;
    QPushButton *enviar_f;
    QPushButton *nuevo_f;
    QPushButton *salir_f;
    QPushButton *iniciar_f;
    QComboBox *Genero_r;
    QLabel *label_5;
    QLineEdit *apellido_f;
    QLineEdit *nombre_f;
    QLineEdit *doc_f;
    QLineEdit *direccion_f;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *fecha_f;
    QLabel *label_6;
    QLabel *label_8;
    QGroupBox *groupBox;
    QRadioButton *min1_f;
    QRadioButton *min3_f;
    QRadioButton *min5_f;
    QLabel *label_3;
    QLabel *label;

    void setupUi(QWidget *formulario)
    {
        if (formulario->objectName().isEmpty())
            formulario->setObjectName(QStringLiteral("formulario"));
        formulario->resize(394, 474);
        Raza_r = new QComboBox(formulario);
        Raza_r->setObjectName(QStringLiteral("Raza_r"));
        Raza_r->setGeometry(QRect(20, 210, 151, 25));
        label_7 = new QLabel(formulario);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 90, 181, 17));
        nivel_f = new QLineEdit(formulario);
        nivel_f->setObjectName(QStringLiteral("nivel_f"));
        nivel_f->setGeometry(QRect(210, 210, 121, 25));
        splitter = new QSplitter(formulario);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(60, 390, 267, 25));
        splitter->setOrientation(Qt::Horizontal);
        enviar_f = new QPushButton(splitter);
        enviar_f->setObjectName(QStringLiteral("enviar_f"));
        splitter->addWidget(enviar_f);
        nuevo_f = new QPushButton(splitter);
        nuevo_f->setObjectName(QStringLiteral("nuevo_f"));
        splitter->addWidget(nuevo_f);
        salir_f = new QPushButton(splitter);
        salir_f->setObjectName(QStringLiteral("salir_f"));
        splitter->addWidget(salir_f);
        iniciar_f = new QPushButton(formulario);
        iniciar_f->setObjectName(QStringLiteral("iniciar_f"));
        iniciar_f->setEnabled(false);
        iniciar_f->setGeometry(QRect(150, 340, 89, 25));
        Genero_r = new QComboBox(formulario);
        Genero_r->setObjectName(QStringLiteral("Genero_r"));
        Genero_r->setGeometry(QRect(210, 160, 111, 25));
        label_5 = new QLabel(formulario);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 140, 67, 17));
        apellido_f = new QLineEdit(formulario);
        apellido_f->setObjectName(QStringLiteral("apellido_f"));
        apellido_f->setGeometry(QRect(150, 60, 113, 25));
        nombre_f = new QLineEdit(formulario);
        nombre_f->setObjectName(QStringLiteral("nombre_f"));
        nombre_f->setGeometry(QRect(20, 60, 113, 25));
        doc_f = new QLineEdit(formulario);
        doc_f->setObjectName(QStringLiteral("doc_f"));
        doc_f->setGeometry(QRect(20, 110, 171, 25));
        direccion_f = new QLineEdit(formulario);
        direccion_f->setObjectName(QStringLiteral("direccion_f"));
        direccion_f->setGeometry(QRect(20, 160, 171, 25));
        label_2 = new QLabel(formulario);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 190, 67, 17));
        label_4 = new QLabel(formulario);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 90, 151, 17));
        fecha_f = new QLineEdit(formulario);
        fecha_f->setObjectName(QStringLiteral("fecha_f"));
        fecha_f->setGeometry(QRect(210, 110, 113, 25));
        label_6 = new QLabel(formulario);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(210, 140, 67, 17));
        label_8 = new QLabel(formulario);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(210, 190, 121, 17));
        groupBox = new QGroupBox(formulario);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 240, 351, 80));
        min1_f = new QRadioButton(groupBox);
        min1_f->setObjectName(QStringLiteral("min1_f"));
        min1_f->setGeometry(QRect(10, 40, 111, 23));
        min3_f = new QRadioButton(groupBox);
        min3_f->setObjectName(QStringLiteral("min3_f"));
        min3_f->setGeometry(QRect(130, 40, 91, 23));
        min5_f = new QRadioButton(groupBox);
        min5_f->setObjectName(QStringLiteral("min5_f"));
        min5_f->setGeometry(QRect(230, 40, 91, 23));
        label_3 = new QLabel(formulario);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 30, 67, 17));
        label = new QLabel(formulario);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 67, 17));

        retranslateUi(formulario);

        QMetaObject::connectSlotsByName(formulario);
    } // setupUi

    void retranslateUi(QWidget *formulario)
    {
        formulario->setWindowTitle(QApplication::translate("formulario", "Form", Q_NULLPTR));
        label_7->setText(QApplication::translate("formulario", "Documento de identidad:", Q_NULLPTR));
        nivel_f->setText(QString());
        enviar_f->setText(QApplication::translate("formulario", "Enviar", Q_NULLPTR));
        nuevo_f->setText(QApplication::translate("formulario", "Nuevo", Q_NULLPTR));
        salir_f->setText(QApplication::translate("formulario", "Salir", Q_NULLPTR));
        iniciar_f->setText(QApplication::translate("formulario", "Iniciar", Q_NULLPTR));
        label_5->setText(QApplication::translate("formulario", "Direccion:", Q_NULLPTR));
        label_2->setText(QApplication::translate("formulario", "Raza:", Q_NULLPTR));
        label_4->setText(QApplication::translate("formulario", "Fecha de nacimiento:", Q_NULLPTR));
        label_6->setText(QApplication::translate("formulario", "Genero:", Q_NULLPTR));
        label_8->setText(QApplication::translate("formulario", "Nivel de ingreso:", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("formulario", "Duracion del examen", Q_NULLPTR));
        min1_f->setText(QApplication::translate("formulario", "30 Segundos", Q_NULLPTR));
        min3_f->setText(QApplication::translate("formulario", "1 minutos", Q_NULLPTR));
        min5_f->setText(QApplication::translate("formulario", "2 minutos", Q_NULLPTR));
        label_3->setText(QApplication::translate("formulario", "Apellido:", Q_NULLPTR));
        label->setText(QApplication::translate("formulario", "Nombre:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formulario: public Ui_formulario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARIO_H
