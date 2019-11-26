/********************************************************************************
** Form generated from reading UI file 'fm_visualizarjogos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_VISUALIZARJOGOS_H
#define UI_FM_VISUALIZARJOGOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_visualizarJogos
{
public:
    QLabel *label;
    QPushButton *btn_voltar;
    QTableWidget *tw_visualizarJogos;

    void setupUi(QDialog *fm_visualizarJogos)
    {
        if (fm_visualizarJogos->objectName().isEmpty())
            fm_visualizarJogos->setObjectName(QString::fromUtf8("fm_visualizarJogos"));
        fm_visualizarJogos->resize(869, 415);
        label = new QLabel(fm_visualizarJogos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 661, 61));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        btn_voltar = new QPushButton(fm_visualizarJogos);
        btn_voltar->setObjectName(QString::fromUtf8("btn_voltar"));
        btn_voltar->setGeometry(QRect(740, 370, 93, 28));
        tw_visualizarJogos = new QTableWidget(fm_visualizarJogos);
        tw_visualizarJogos->setObjectName(QString::fromUtf8("tw_visualizarJogos"));
        tw_visualizarJogos->setGeometry(QRect(10, 90, 851, 261));

        retranslateUi(fm_visualizarJogos);

        QMetaObject::connectSlotsByName(fm_visualizarJogos);
    } // setupUi

    void retranslateUi(QDialog *fm_visualizarJogos)
    {
        fm_visualizarJogos->setWindowTitle(QApplication::translate("fm_visualizarJogos", "Dialog", nullptr));
        label->setText(QApplication::translate("fm_visualizarJogos", "Jogos ", nullptr));
        btn_voltar->setText(QApplication::translate("fm_visualizarJogos", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_visualizarJogos: public Ui_fm_visualizarJogos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_VISUALIZARJOGOS_H
