/********************************************************************************
** Form generated from reading UI file 'janelalogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELALOGIN_H
#define UI_JANELALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaLogin
{
public:
    QWidget *centralwidget;
    QPushButton *btn_cadastrar;
    QPushButton *btn_visualizarJogos;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_cpf;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_senha;
    QPushButton *btn_entrar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JanelaLogin)
    {
        if (JanelaLogin->objectName().isEmpty())
            JanelaLogin->setObjectName(QString::fromUtf8("JanelaLogin"));
        JanelaLogin->resize(474, 639);
        centralwidget = new QWidget(JanelaLogin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_cadastrar = new QPushButton(centralwidget);
        btn_cadastrar->setObjectName(QString::fromUtf8("btn_cadastrar"));
        btn_cadastrar->setGeometry(QRect(100, 320, 271, 81));
        btn_cadastrar->setStyleSheet(QString::fromUtf8(""));
        btn_visualizarJogos = new QPushButton(centralwidget);
        btn_visualizarJogos->setObjectName(QString::fromUtf8("btn_visualizarJogos"));
        btn_visualizarJogos->setGeometry(QRect(100, 440, 271, 81));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 10, 361, 81));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 90, 291, 16));
        QFont font1;
        font1.setPointSize(10);
        label_4->setFont(font1);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 140, 371, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txt_cpf = new QLineEdit(widget);
        txt_cpf->setObjectName(QString::fromUtf8("txt_cpf"));

        horizontalLayout->addWidget(txt_cpf);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txt_senha = new QLineEdit(widget);
        txt_senha->setObjectName(QString::fromUtf8("txt_senha"));
        txt_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_senha);

        btn_entrar = new QPushButton(widget);
        btn_entrar->setObjectName(QString::fromUtf8("btn_entrar"));
        btn_entrar->setEnabled(true);
        btn_entrar->setMaximumSize(QSize(142, 42));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        btn_entrar->setFont(font2);
        btn_entrar->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(btn_entrar);


        verticalLayout->addLayout(horizontalLayout_2);

        JanelaLogin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JanelaLogin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 474, 26));
        JanelaLogin->setMenuBar(menubar);
        statusbar = new QStatusBar(JanelaLogin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        JanelaLogin->setStatusBar(statusbar);

        retranslateUi(JanelaLogin);

        QMetaObject::connectSlotsByName(JanelaLogin);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaLogin)
    {
        JanelaLogin->setWindowTitle(QApplication::translate("JanelaLogin", "JanelaLogin", nullptr));
        btn_cadastrar->setText(QApplication::translate("JanelaLogin", "Cadastrar", nullptr));
        btn_visualizarJogos->setText(QApplication::translate("JanelaLogin", "Visualizar Jogos", nullptr));
        label_3->setText(QApplication::translate("JanelaLogin", "Sistema de Jogos", nullptr));
        label_4->setText(QApplication::translate("JanelaLogin", "T\303\251cnicas de Programa\303\247\303\243o 1 - 2\302\272/2019", nullptr));
        label->setText(QApplication::translate("JanelaLogin", "CPF", nullptr));
        label_2->setText(QApplication::translate("JanelaLogin", "Senha", nullptr));
        btn_entrar->setText(QApplication::translate("JanelaLogin", "Entrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaLogin: public Ui_JanelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALOGIN_H
