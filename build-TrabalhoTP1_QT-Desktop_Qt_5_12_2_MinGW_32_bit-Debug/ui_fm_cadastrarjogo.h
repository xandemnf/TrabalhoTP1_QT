/********************************************************************************
** Form generated from reading UI file 'fm_cadastrarjogo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_CADASTRARJOGO_H
#define UI_FM_CADASTRARJOGO_H

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

class Ui_fm_cadastrarJogo
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *txt_codJogo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *txt_nomeJogo;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *txt_codIngresso;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *txt_data;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *txt_hora;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *txt_preco;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *txt_nomeEstadio;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *txt_cidade;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *txt_estado;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *btn_voltar;
    QPushButton *btn_cadastrarJogo;

    void setupUi(QDialog *fm_cadastrarJogo)
    {
        if (fm_cadastrarJogo->objectName().isEmpty())
            fm_cadastrarJogo->setObjectName(QString::fromUtf8("fm_cadastrarJogo"));
        fm_cadastrarJogo->resize(400, 415);
        label = new QLabel(fm_cadastrarJogo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 341, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(fm_cadastrarJogo);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 60, 321, 291));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        txt_codJogo = new QLineEdit(layoutWidget);
        txt_codJogo->setObjectName(QString::fromUtf8("txt_codJogo"));

        horizontalLayout->addWidget(txt_codJogo);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        txt_nomeJogo = new QLineEdit(layoutWidget);
        txt_nomeJogo->setObjectName(QString::fromUtf8("txt_nomeJogo"));

        horizontalLayout_2->addWidget(txt_nomeJogo);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        txt_codIngresso = new QLineEdit(layoutWidget);
        txt_codIngresso->setObjectName(QString::fromUtf8("txt_codIngresso"));

        horizontalLayout_3->addWidget(txt_codIngresso);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        txt_data = new QLineEdit(layoutWidget);
        txt_data->setObjectName(QString::fromUtf8("txt_data"));

        horizontalLayout_4->addWidget(txt_data);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        txt_hora = new QLineEdit(layoutWidget);
        txt_hora->setObjectName(QString::fromUtf8("txt_hora"));

        horizontalLayout_5->addWidget(txt_hora);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        txt_preco = new QLineEdit(layoutWidget);
        txt_preco->setObjectName(QString::fromUtf8("txt_preco"));

        horizontalLayout_6->addWidget(txt_preco);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        txt_nomeEstadio = new QLineEdit(layoutWidget);
        txt_nomeEstadio->setObjectName(QString::fromUtf8("txt_nomeEstadio"));

        horizontalLayout_7->addWidget(txt_nomeEstadio);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        txt_cidade = new QLineEdit(layoutWidget);
        txt_cidade->setObjectName(QString::fromUtf8("txt_cidade"));

        horizontalLayout_8->addWidget(txt_cidade);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        txt_estado = new QLineEdit(layoutWidget);
        txt_estado->setObjectName(QString::fromUtf8("txt_estado"));

        horizontalLayout_9->addWidget(txt_estado);


        verticalLayout->addLayout(horizontalLayout_9);

        layoutWidget1 = new QWidget(fm_cadastrarJogo);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 370, 271, 31));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        btn_voltar = new QPushButton(layoutWidget1);
        btn_voltar->setObjectName(QString::fromUtf8("btn_voltar"));

        horizontalLayout_10->addWidget(btn_voltar);

        btn_cadastrarJogo = new QPushButton(layoutWidget1);
        btn_cadastrarJogo->setObjectName(QString::fromUtf8("btn_cadastrarJogo"));

        horizontalLayout_10->addWidget(btn_cadastrarJogo);


        retranslateUi(fm_cadastrarJogo);

        QMetaObject::connectSlotsByName(fm_cadastrarJogo);
    } // setupUi

    void retranslateUi(QDialog *fm_cadastrarJogo)
    {
        fm_cadastrarJogo->setWindowTitle(QApplication::translate("fm_cadastrarJogo", "Dialog", nullptr));
        label->setText(QApplication::translate("fm_cadastrarJogo", "Cadastro de Jogo", nullptr));
        label_2->setText(QApplication::translate("fm_cadastrarJogo", "C\303\263d.do Jogo", nullptr));
        label_3->setText(QApplication::translate("fm_cadastrarJogo", "Nome do Jogo", nullptr));
        label_4->setText(QApplication::translate("fm_cadastrarJogo", "C\303\263d. do Ingresso", nullptr));
        label_5->setText(QApplication::translate("fm_cadastrarJogo", "Data", nullptr));
        label_6->setText(QApplication::translate("fm_cadastrarJogo", "Hora", nullptr));
        label_7->setText(QApplication::translate("fm_cadastrarJogo", "Pre\303\247o", nullptr));
        label_8->setText(QApplication::translate("fm_cadastrarJogo", "Nome do Est\303\241dio", nullptr));
        label_9->setText(QApplication::translate("fm_cadastrarJogo", "Cidade", nullptr));
        label_10->setText(QApplication::translate("fm_cadastrarJogo", "Estado", nullptr));
        btn_voltar->setText(QApplication::translate("fm_cadastrarJogo", "Voltar", nullptr));
        btn_cadastrarJogo->setText(QApplication::translate("fm_cadastrarJogo", "Cadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_cadastrarJogo: public Ui_fm_cadastrarJogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_CADASTRARJOGO_H
