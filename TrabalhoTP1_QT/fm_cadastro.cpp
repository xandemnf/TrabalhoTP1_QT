#include "fm_cadastro.h"
#include "ui_fm_cadastro.h"
#include <QMessageBox>

fm_cadastro::fm_cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_cadastro)
{
    ui->setupUi(this);
}

fm_cadastro::~fm_cadastro()
{
    delete ui;
}

void fm_cadastro::on_btn_salvar_clicked()
{
    //Capturando valores do formulario de cadastro
    QString cpf = ui->txt_cpf->text();
    QString senha = ui->txt_senha->text();
    QString num = ui->txt_num->text();
    QString codSeg = ui->txt_codSeg->text();
    QString validade = ui->txt_validade->text();

    //Montando Query de inserção
    QSqlQuery query;
    query.prepare("insert into tb_usuario (cpf, senha, numero, codSeg, validade) values('"+cpf+"','"+senha+"','"+num+"','"+codSeg+"','"+validade+"')");

    if(query.exec()){
        QMessageBox::information(this,"Cadastro", "Usuário registrado com sucesso!");
        ui->txt_cpf->clear();
        ui->txt_senha->clear();
        ui->txt_num->clear();
        ui->txt_codSeg->clear();
        ui->txt_validade->clear();
        ui->txt_cpf->setFocus();
    }else{
        qDebug()<<"Erro ao inserir Registro";
    }

}

void fm_cadastro::on_btn_voltar_clicked(){
    close();
}
