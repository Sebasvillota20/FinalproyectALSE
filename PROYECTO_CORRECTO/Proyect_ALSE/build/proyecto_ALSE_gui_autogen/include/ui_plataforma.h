/********************************************************************************
** Form generated from reading UI file 'plataforma.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLATAFORMA_H
#define UI_PLATAFORMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_plataforma
{
public:
    QLabel *label;
    QPushButton *registro_p;
    QLineEdit *password_p;
    QLabel *label_3;
    QLineEdit *Restriccion_p;
    QLineEdit *nombre_p;
    QPushButton *ingreso_p;
    QLabel *label_2;

    void setupUi(QWidget *plataforma)
    {
        if (plataforma->objectName().isEmpty())
            plataforma->setObjectName(QStringLiteral("plataforma"));
        plataforma->resize(365, 280);
        label = new QLabel(plataforma);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 141, 17));
        registro_p = new QPushButton(plataforma);
        registro_p->setObjectName(QStringLiteral("registro_p"));
        registro_p->setGeometry(QRect(170, 220, 89, 25));
        password_p = new QLineEdit(plataforma);
        password_p->setObjectName(QStringLiteral("password_p"));
        password_p->setGeometry(QRect(70, 140, 113, 25));
        password_p->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(plataforma);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 40, 301, 17));
        label_3->setStyleSheet(QLatin1String("border-color: rgb(204, 0, 0);\n"
""));
        Restriccion_p = new QLineEdit(plataforma);
        Restriccion_p->setObjectName(QStringLiteral("Restriccion_p"));
        Restriccion_p->setEnabled(false);
        Restriccion_p->setGeometry(QRect(70, 180, 201, 25));
        QFont font;
        font.setPointSize(8);
        Restriccion_p->setFont(font);
        Restriccion_p->setCursor(QCursor(Qt::BlankCursor));
        Restriccion_p->setStyleSheet(QStringLiteral("color: rgb(239, 41, 41)"));
        nombre_p = new QLineEdit(plataforma);
        nombre_p->setObjectName(QStringLiteral("nombre_p"));
        nombre_p->setGeometry(QRect(70, 90, 131, 25));
        ingreso_p = new QPushButton(plataforma);
        ingreso_p->setObjectName(QStringLiteral("ingreso_p"));
        ingreso_p->setGeometry(QRect(70, 220, 89, 25));
        label_2 = new QLabel(plataforma);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 120, 91, 17));

        retranslateUi(plataforma);

        QMetaObject::connectSlotsByName(plataforma);
    } // setupUi

    void retranslateUi(QWidget *plataforma)
    {
        plataforma->setWindowTitle(QApplication::translate("plataforma", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("plataforma", "Nombre de usuario:", Q_NULLPTR));
        registro_p->setText(QApplication::translate("plataforma", "Registrarse", Q_NULLPTR));
        label_3->setText(QApplication::translate("plataforma", "Centro de investigacion Neuromotor ALSE", Q_NULLPTR));
        ingreso_p->setText(QApplication::translate("plataforma", "Ingresar", Q_NULLPTR));
        label_2->setText(QApplication::translate("plataforma", "Contrase\303\261a:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class plataforma: public Ui_plataforma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLATAFORMA_H
