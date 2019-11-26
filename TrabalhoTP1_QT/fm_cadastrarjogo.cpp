#include "fm_cadastrarjogo.h"
#include "ui_fm_cadastrarjogo.h"

fm_cadastrarJogo::fm_cadastrarJogo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_cadastrarJogo)
{
    ui->setupUi(this);
}

fm_cadastrarJogo::~fm_cadastrarJogo()
{
    delete ui;
}

void fm_cadastrarJogo::on_btn_cadastrarJogo_clicked(){
   QString codigoJogo = ui->txt_codIngresso->text();
   QString nomeJogo = ui->txt_nomeJogo->text();
   QString codIngresso = ui->txt_codIngresso->text();
   QString data = ui->txt_data->text();
   QString hora = ui->txt_hora->text();
   QString preco = ui->txt_preco->text();
   QString nomeEstadio = ui->txt_nomeEstadio->text();
   QString cidade = ui->txt_cidade->text();
   QString estado = ui->txt_estado->text();

   QSqlQuery query;
   query.prepare("insert into tb_jogoCadastrado (codigoJogo, nomeJogo, codIngresso, data, hora, preco, nomeEstadio, cidade, estado) values('"+codigoJogo+"','"+nomeJogo+"','"+codIngresso+"','"+data+"','"+hora+"','"+preco+"','"+nomeEstadio+"','"+cidade+"','"+estado+"')");
   if(query.exec()){
       QMessageBox::information(this, "Inserido", "Jogo Cadastrado com sucesso");
   }else{
       QMessageBox::warning(this, "Erro", "Erro ao inserir objetos no Banco de Dados");
   }

   ui->txt_codJogo->clear();
   ui->txt_codIngresso->clear();
   ui->txt_nomeJogo->clear();
   ui->txt_codIngresso->clear();
   ui->txt_data->clear();
   ui->txt_hora->clear();
   ui->txt_preco->clear();
   ui->txt_nomeEstadio->clear();
   ui->txt_cidade->clear();
   ui->txt_estado->clear();
   ui->txt_codJogo->setFocus();

}

void fm_cadastrarJogo::on_btn_voltar_clicked(){
    close();
}
