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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formulario
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLabel *_nombre_usu;
    QLabel *label_10;
    QLabel *_edad_usuar;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QComboBox *Genero_r;
    QLineEdit *nombre_f;
    QLabel *label_5;
    QLineEdit *doc_f;
    QLineEdit *direccion_f;
    QLineEdit *apellido_f;
    QLabel *label_2;
    QComboBox *Raza_r;
    QLabel *label_4;
    QLineEdit *fecha_f;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *nivel_f;
    QLabel *label_11;
    QLabel *label;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *_time30;
    QRadioButton *_time1m;
    QRadioButton *_time2m;
    QHBoxLayout *horizontalLayout;
    QPushButton *iniciar_f;
    QPushButton *salir_f;

    void setupUi(QWidget *formulario)
    {
        if (formulario->objectName().isEmpty())
            formulario->setObjectName(QStringLiteral("formulario"));
        formulario->resize(361, 398);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(formulario->sizePolicy().hasHeightForWidth());
        formulario->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(formulario);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 10, 340, 372));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);

        _nombre_usu = new QLabel(layoutWidget);
        _nombre_usu->setObjectName(QStringLiteral("_nombre_usu"));
        _nombre_usu->setStyleSheet(QStringLiteral("color:rgb(204, 0, 0)"));

        horizontalLayout_2->addWidget(_nombre_usu);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);

        _edad_usuar = new QLabel(layoutWidget);
        _edad_usuar->setObjectName(QStringLiteral("_edad_usuar"));
        _edad_usuar->setStyleSheet(QStringLiteral("color: rgb(204, 0, 0);"));

        horizontalLayout_2->addWidget(_edad_usuar);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 7, 1, 1, 1);

        Genero_r = new QComboBox(layoutWidget);
        Genero_r->setObjectName(QStringLiteral("Genero_r"));

        gridLayout->addWidget(Genero_r, 8, 1, 1, 1);

        nombre_f = new QLineEdit(layoutWidget);
        nombre_f->setObjectName(QStringLiteral("nombre_f"));

        gridLayout->addWidget(nombre_f, 4, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 7, 0, 1, 1);

        doc_f = new QLineEdit(layoutWidget);
        doc_f->setObjectName(QStringLiteral("doc_f"));

        gridLayout->addWidget(doc_f, 6, 0, 1, 1);

        direccion_f = new QLineEdit(layoutWidget);
        direccion_f->setObjectName(QStringLiteral("direccion_f"));

        gridLayout->addWidget(direccion_f, 8, 0, 1, 1);

        apellido_f = new QLineEdit(layoutWidget);
        apellido_f->setObjectName(QStringLiteral("apellido_f"));

        gridLayout->addWidget(apellido_f, 4, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 9, 0, 1, 1);

        Raza_r = new QComboBox(layoutWidget);
        Raza_r->setObjectName(QStringLiteral("Raza_r"));

        gridLayout->addWidget(Raza_r, 10, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 5, 1, 1, 1);

        fecha_f = new QLineEdit(layoutWidget);
        fecha_f->setObjectName(QStringLiteral("fecha_f"));

        gridLayout->addWidget(fecha_f, 6, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 9, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        nivel_f = new QLineEdit(layoutWidget);
        nivel_f->setObjectName(QStringLiteral("nivel_f"));

        gridLayout->addWidget(nivel_f, 10, 1, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("color: rgb(52, 101, 164);"));

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        _time30 = new QRadioButton(groupBox);
        _time30->setObjectName(QStringLiteral("_time30"));

        horizontalLayout_3->addWidget(_time30);

        _time1m = new QRadioButton(groupBox);
        _time1m->setObjectName(QStringLiteral("_time1m"));

        horizontalLayout_3->addWidget(_time1m);

        _time2m = new QRadioButton(groupBox);
        _time2m->setObjectName(QStringLiteral("_time2m"));

        horizontalLayout_3->addWidget(_time2m);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        iniciar_f = new QPushButton(layoutWidget);
        iniciar_f->setObjectName(QStringLiteral("iniciar_f"));
        iniciar_f->setEnabled(false);

        horizontalLayout->addWidget(iniciar_f);

        salir_f = new QPushButton(layoutWidget);
        salir_f->setObjectName(QStringLiteral("salir_f"));

        horizontalLayout->addWidget(salir_f);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout_2->addLayout(verticalLayout_2, 1, 0, 1, 1);


        retranslateUi(formulario);

        QMetaObject::connectSlotsByName(formulario);
    } // setupUi

    void retranslateUi(QWidget *formulario)
    {
        formulario->setWindowTitle(QApplication::translate("formulario", "Form", Q_NULLPTR));
        label_9->setText(QApplication::translate("formulario", "Usuario:", Q_NULLPTR));
        _nombre_usu->setText(QApplication::translate("formulario", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("formulario", "Edad:", Q_NULLPTR));
        _edad_usuar->setText(QApplication::translate("formulario", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("formulario", "Genero:", Q_NULLPTR));
        label_5->setText(QApplication::translate("formulario", "Direccion:", Q_NULLPTR));
        label_2->setText(QApplication::translate("formulario", "Raza:", Q_NULLPTR));
        label_4->setText(QApplication::translate("formulario", "Fecha de nacimiento:", Q_NULLPTR));
        label_8->setText(QApplication::translate("formulario", "Nivel de ingreso:", Q_NULLPTR));
        label_7->setText(QApplication::translate("formulario", "Documento de identidad:", Q_NULLPTR));
        nivel_f->setText(QString());
        label_11->setText(QApplication::translate("formulario", "REGISTRO PACIENTE", Q_NULLPTR));
        label->setText(QApplication::translate("formulario", "Nombre:", Q_NULLPTR));
        label_3->setText(QApplication::translate("formulario", "Apellido:", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("formulario", "Duracion del examen", Q_NULLPTR));
        _time30->setText(QApplication::translate("formulario", "30 Segundos", Q_NULLPTR));
        _time1m->setText(QApplication::translate("formulario", "1 minutos", Q_NULLPTR));
        _time2m->setText(QApplication::translate("formulario", "2 minutos", Q_NULLPTR));
        iniciar_f->setText(QApplication::translate("formulario", "Iniciar", Q_NULLPTR));
        salir_f->setText(QApplication::translate("formulario", "Salir", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formulario: public Ui_formulario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARIO_H
