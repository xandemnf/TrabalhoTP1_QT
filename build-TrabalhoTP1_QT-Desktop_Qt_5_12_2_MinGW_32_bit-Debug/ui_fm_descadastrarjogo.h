/********************************************************************************
** Form generated from reading UI file 'fm_descadastrarjogo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_DESCADASTRARJOGO_H
#define UI_FM_DESCADASTRARJOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_descadastrarJogo
{
public:
    QTableWidget *tw_descadastrarJogo;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_voltar;
    QPushButton *btn_descadastrarJogo;

    void setupUi(QDialog *fm_descadastrarJogo)
    {
        if (fm_descadastrarJogo->objectName().isEmpty())
            fm_descadastrarJogo->setObjectName(QString::fromUtf8("fm_descadastrarJogo"));
        fm_descadastrarJogo->resize(1129, 435);
        tw_descadastrarJogo = new QTableWidget(fm_descadastrarJogo);
        tw_descadastrarJogo->setObjectName(QString::fromUtf8("tw_descadastrarJogo"));
        tw_descadastrarJogo->setGeometry(QRect(20, 110, 1091, 271));
        label = new QLabel(fm_descadastrarJogo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 30, 491, 51));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(fm_descadastrarJogo);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(760, 390, 346, 43));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_voltar = new QPushButton(widget);
        btn_voltar->setObjectName(QString::fromUtf8("btn_voltar"));

        horizontalLayout->addWidget(btn_voltar);

        btn_descadastrarJogo = new QPushButton(widget);
        btn_descadastrarJogo->setObjectName(QString::fromUtf8("btn_descadastrarJogo"));

        horizontalLayout->addWidget(btn_descadastrarJogo);


        retranslateUi(fm_descadastrarJogo);

        QMetaObject::connectSlotsByName(fm_descadastrarJogo);
    } // setupUi

    void retranslateUi(QDialog *fm_descadastrarJogo)
    {
        fm_descadastrarJogo->setWindowTitle(QApplication::translate("fm_descadastrarJogo", "Dialog", nullptr));
        label->setText(QApplication::translate("fm_descadastrarJogo", "Jogos Dispon\303\255veis", nullptr));
        btn_voltar->setText(QApplication::translate("fm_descadastrarJogo", "Voltar", nullptr));
        btn_descadastrarJogo->setText(QApplication::translate("fm_descadastrarJogo", "Descadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_descadastrarJogo: public Ui_fm_descadastrarJogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_DESCADASTRARJOGO_H
