/********************************************************************************
** Form generated from reading UI file 'fm_cadastro.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_CADASTRO_H
#define UI_FM_CADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_cadastro
{
public:
    QPushButton *btn_voltar;
    QPushButton *btn_salvar;
    QLabel *label_3;
    QLabel *label_7;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_cpf;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_senha;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *txt_num;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *txt_codSeg;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *txt_validade;

    void setupUi(QDialog *fm_cadastro)
    {
        if (fm_cadastro->objectName().isEmpty())
            fm_cadastro->setObjectName(QString::fromUtf8("fm_cadastro"));
        fm_cadastro->resize(400, 427);
        btn_voltar = new QPushButton(fm_cadastro);
        btn_voltar->setObjectName(QString::fromUtf8("btn_voltar"));
        btn_voltar->setGeometry(QRect(60, 320, 121, 51));
        btn_salvar = new QPushButton(fm_cadastro);
        btn_salvar->setObjectName(QString::fromUtf8("btn_salvar"));
        btn_salvar->setGeometry(QRect(220, 320, 121, 51));
        label_3 = new QLabel(fm_cadastro);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 10, 141, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_7 = new QLabel(fm_cadastro);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 150, 201, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);
        widget = new QWidget(fm_cadastro);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 60, 261, 71));
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

        horizontalLayout_2->addWidget(txt_senha);


        verticalLayout->addLayout(horizontalLayout_2);

        widget1 = new QWidget(fm_cadastro);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(50, 190, 291, 111));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        txt_num = new QLineEdit(widget1);
        txt_num->setObjectName(QString::fromUtf8("txt_num"));

        horizontalLayout_3->addWidget(txt_num);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        txt_codSeg = new QLineEdit(widget1);
        txt_codSeg->setObjectName(QString::fromUtf8("txt_codSeg"));

        horizontalLayout_4->addWidget(txt_codSeg);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        txt_validade = new QLineEdit(widget1);
        txt_validade->setObjectName(QString::fromUtf8("txt_validade"));

        horizontalLayout_5->addWidget(txt_validade);


        verticalLayout_2->addLayout(horizontalLayout_5);


        retranslateUi(fm_cadastro);

        QMetaObject::connectSlotsByName(fm_cadastro);
    } // setupUi

    void retranslateUi(QDialog *fm_cadastro)
    {
        fm_cadastro->setWindowTitle(QApplication::translate("fm_cadastro", "Dialog", nullptr));
        btn_voltar->setText(QApplication::translate("fm_cadastro", "Voltar", nullptr));
        btn_salvar->setText(QApplication::translate("fm_cadastro", "Salvar", nullptr));
        label_3->setText(QApplication::translate("fm_cadastro", "Cadastro", nullptr));
        label_7->setText(QApplication::translate("fm_cadastro", "Dados do Cart\303\243o", nullptr));
        label->setText(QApplication::translate("fm_cadastro", "CPF", nullptr));
        label_2->setText(QApplication::translate("fm_cadastro", "Senha", nullptr));
        label_4->setText(QApplication::translate("fm_cadastro", "Numero", nullptr));
        label_5->setText(QApplication::translate("fm_cadastro", "C\303\263d. Seg.", nullptr));
        label_6->setText(QApplication::translate("fm_cadastro", "Validade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_cadastro: public Ui_fm_cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_CADASTRO_H
