/********************************************************************************
** Form generated from reading UI file 'fm_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PRINCIPAL_H
#define UI_FM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_principal
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *btn_cadastrarJogo;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *l_usuarioLogado;

    void setupUi(QDialog *fm_principal)
    {
        if (fm_principal->objectName().isEmpty())
            fm_principal->setObjectName(QString::fromUtf8("fm_principal"));
        fm_principal->resize(400, 438);
        widget = new QWidget(fm_principal);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 160, 231, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        btn_cadastrarJogo = new QPushButton(widget);
        btn_cadastrarJogo->setObjectName(QString::fromUtf8("btn_cadastrarJogo"));

        verticalLayout->addWidget(btn_cadastrarJogo);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        widget1 = new QWidget(fm_principal);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 20, 141, 61));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        l_usuarioLogado = new QLabel(widget1);
        l_usuarioLogado->setObjectName(QString::fromUtf8("l_usuarioLogado"));

        verticalLayout_2->addWidget(l_usuarioLogado);


        retranslateUi(fm_principal);

        QMetaObject::connectSlotsByName(fm_principal);
    } // setupUi

    void retranslateUi(QDialog *fm_principal)
    {
        fm_principal->setWindowTitle(QApplication::translate("fm_principal", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("fm_principal", "Pesquisar Jogo", nullptr));
        pushButton->setText(QApplication::translate("fm_principal", "Comprar Ingresso", nullptr));
        btn_cadastrarJogo->setText(QApplication::translate("fm_principal", "Cadastrar Jogo", nullptr));
        pushButton_4->setText(QApplication::translate("fm_principal", "Descadastrar Jogo", nullptr));
        pushButton_5->setText(QApplication::translate("fm_principal", "Alterar Jogo", nullptr));
        label->setText(QApplication::translate("fm_principal", "Usuario Logado: ", nullptr));
        l_usuarioLogado->setText(QApplication::translate("fm_principal", "************", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
