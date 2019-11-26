#include "fm_principal.h"
#include "ui_fm_principal.h"
#include "janelalogin.h"
#include "fm_descadastrarjogo.h"

fm_principal::fm_principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_principal)
{
    ui->setupUi(this);
}

fm_principal::~fm_principal()
{
    delete ui;
}

void fm_principal::on_btn_cadastrarJogo_clicked(){
    fm_cadastrarJogo cadastrarJogo;
    cadastrarJogo.exec();
}

void fm_principal::on_btn_descadastrarJogo_clicked()
{
    fm_descadastrarJogo descadastrarJogo;
    descadastrarJogo.exec();
}
