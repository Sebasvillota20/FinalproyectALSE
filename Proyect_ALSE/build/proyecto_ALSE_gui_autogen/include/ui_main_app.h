/********************************************************************************
** Form generated from reading UI file 'main_app.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_APP_H
#define UI_MAIN_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_app
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *bt1;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *bt2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bt3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *bt4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *bt5;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bt6;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *bt7;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *bt8;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *bt9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *bt10;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *bt11;
    QLineEdit *aciertos_e;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *main_app)
    {
        if (main_app->objectName().isEmpty())
            main_app->setObjectName(QStringLiteral("main_app"));
        main_app->resize(461, 315);
        centralWidget = new QWidget(main_app);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(9, 9, 443, 159));
        groupBox->setMinimumSize(QSize(0, 40));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter_2 = new QSplitter(groupBox);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter_2->addWidget(splitter);

        gridLayout->addWidget(splitter_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bt1 = new QPushButton(groupBox);
        bt1->setObjectName(QStringLiteral("bt1"));
        bt1->setMinimumSize(QSize(0, 40));
        bt1->setStyleSheet(QStringLiteral("background-color: rgb(239, 41, 41);"));

        horizontalLayout->addWidget(bt1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        bt2 = new QPushButton(groupBox);
        bt2->setObjectName(QStringLiteral("bt2"));
        bt2->setMinimumSize(QSize(0, 40));
        bt2->setStyleSheet(QStringLiteral("background-color: rgb(239, 41, 41)"));

        horizontalLayout->addWidget(bt2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        bt3 = new QPushButton(groupBox);
        bt3->setObjectName(QStringLiteral("bt3"));
        bt3->setMinimumSize(QSize(0, 40));
        bt3->setStyleSheet(QStringLiteral("background-color: rgb(239, 41, 41)"));

        horizontalLayout->addWidget(bt3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        bt4 = new QPushButton(groupBox);
        bt4->setObjectName(QStringLiteral("bt4"));
        bt4->setMinimumSize(QSize(0, 40));
        bt4->setStyleSheet(QStringLiteral("background-color: rgb(239, 41, 41)"));

        horizontalLayout->addWidget(bt4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        bt5 = new QPushButton(groupBox);
        bt5->setObjectName(QStringLiteral("bt5"));
        bt5->setMinimumSize(QSize(0, 40));
        bt5->setStyleSheet(QStringLiteral("background-color: rgb(239, 41, 41);"));

        horizontalLayout->addWidget(bt5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        bt6 = new QPushButton(groupBox);
        bt6->setObjectName(QStringLiteral("bt6"));
        bt6->setMinimumSize(QSize(0, 40));
        bt6->setStyleSheet(QStringLiteral("background-color: rgb(239, 41, 41);"));

        horizontalLayout_2->addWidget(bt6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        bt7 = new QPushButton(groupBox);
        bt7->setObjectName(QStringLiteral("bt7"));
        bt7->setMinimumSize(QSize(0, 40));
        bt7->setStyleSheet(QStringLiteral("background-color: rgb(239, 41, 41);"));

        horizontalLayout_2->addWidget(bt7);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        bt8 = new QPushButton(groupBox);
        bt8->setObjectName(QStringLiteral("bt8"));
        bt8->setMinimumSize(QSize(0, 40));
        bt8->setStyleSheet(QStringLiteral("background-color: rgb(239, 41, 41);"));

        horizontalLayout_2->addWidget(bt8);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        bt9 = new QPushButton(groupBox);
        bt9->setObjectName(QStringLiteral("bt9"));
        bt9->setMinimumSize(QSize(0, 40));
        bt9->setStyleSheet(QStringLiteral("background-color:rgb(239, 41, 41);"));

        horizontalLayout_2->addWidget(bt9);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        bt10 = new QPushButton(groupBox);
        bt10->setObjectName(QStringLiteral("bt10"));
        bt10->setMinimumSize(QSize(0, 40));
        bt10->setStyleSheet(QStringLiteral("background-color: rgb(239, 41, 41);"));

        horizontalLayout_2->addWidget(bt10);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);

        bt11 = new QPushButton(groupBox);
        bt11->setObjectName(QStringLiteral("bt11"));
        bt11->setMinimumSize(QSize(0, 40));
        bt11->setStyleSheet(QStringLiteral("background-color: rgb(239, 41, 41);"));

        horizontalLayout_2->addWidget(bt11);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        aciertos_e = new QLineEdit(centralWidget);
        aciertos_e->setObjectName(QStringLiteral("aciertos_e"));
        aciertos_e->setEnabled(false);
        aciertos_e->setGeometry(QRect(260, 180, 71, 25));
        aciertos_e->setStyleSheet(QStringLiteral("color: rgb(115, 210, 22);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 170, 138, 40));
        label->setMinimumSize(QSize(0, 40));
        label->setStyleSheet(QStringLiteral("color: rgb(115, 210, 22);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 220, 120, 17));
        label_2->setStyleSheet(QStringLiteral("color: rgb(204, 0, 0);"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(260, 220, 51, 25));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(25, 25));
        lineEdit->setStyleSheet(QStringLiteral("color: rgb(204, 0, 0);"));
        main_app->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(main_app);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 461, 22));
        main_app->setMenuBar(menuBar);
        mainToolBar = new QToolBar(main_app);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        main_app->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(main_app);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        main_app->setStatusBar(statusBar);

        retranslateUi(main_app);

        QMetaObject::connectSlotsByName(main_app);
    } // setupUi

    void retranslateUi(QMainWindow *main_app)
    {
        main_app->setWindowTitle(QApplication::translate("main_app", "main_app", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("main_app", "Prueba de agilidad", Q_NULLPTR));
        bt1->setText(QString());
        bt2->setText(QString());
        bt3->setText(QString());
        bt4->setText(QString());
        bt5->setText(QString());
        bt6->setText(QString());
        bt7->setText(QString());
        bt8->setText(QString());
        bt9->setText(QString());
        bt10->setText(QString());
        bt11->setText(QString());
        label->setText(QApplication::translate("main_app", "Numero de aciertos:", Q_NULLPTR));
        label_2->setText(QApplication::translate("main_app", "Tiempo Restante:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class main_app: public Ui_main_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_APP_H
