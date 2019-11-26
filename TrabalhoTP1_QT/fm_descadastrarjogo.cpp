#include "fm_descadastrarjogo.h"
#include "ui_fm_descadastrarjogo.h"
#include <QtSql>
#include <QMessageBox>

fm_descadastrarJogo::fm_descadastrarJogo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_descadastrarJogo)
{
    ui->setupUi(this);

    QSqlQuery query;

    query.prepare("select * from tb_jogoCadastrado");

    if(query.exec()){
        int cont=0;
        //setar quantidade de colunas na tabela widget
        ui->tw_descadastrarJogo->setColumnCount(9);
        while(query.next()){
            //setar quantidade de linhas na tabela widget
            ui->tw_descadastrarJogo->insertRow(cont);
            ui->tw_descadastrarJogo->setItem(cont, 0, new QTableWidgetItem(query.value(1).toString()));
            ui->tw_descadastrarJogo->setItem(cont, 1, new QTableWidgetItem(query.value(2).toString()));
            ui->tw_descadastrarJogo->setItem(cont, 2, new QTableWidgetItem(query.value(3).toString()));
            ui->tw_descadastrarJogo->setItem(cont, 3, new QTableWidgetItem(query.value(4).toString()));
            ui->tw_descadastrarJogo->setItem(cont, 4, new QTableWidgetItem(query.value(5).toString()));
            ui->tw_descadastrarJogo->setItem(cont, 5, new QTableWidgetItem(query.value(6).toString()));
            ui->tw_descadastrarJogo->setItem(cont, 6, new QTableWidgetItem(query.value(7).toString()));
            ui->tw_descadastrarJogo->setItem(cont, 7, new QTableWidgetItem(query.value(8).toString()));
            ui->tw_descadastrarJogo->setItem(cont, 8, new QTableWidgetItem(query.value(9).toString()));
            //ui->tw_visualizarJogos->setItem(cont, 9, new QTableWidgetItem(query.value(10).toString()));
            ui->tw_descadastrarJogo->setRowHeight(cont,20);
            cont++;
        }
        //Setando tamanho das colunas no widget tw_contatos
        ui->tw_descadastrarJogo->setColumnWidth(0,30);
        ui->tw_descadastrarJogo->setColumnWidth(1,150);
        ui->tw_descadastrarJogo->setColumnWidth(3,250);
        //setando lista de cabeçalho
        QStringList cabecalhos={"Cód. Jogo","Nome Jogo","Cód. Ingresso","Data", "Hora", "Preço", "Nome Estádio","Cidade", "Estado"};
        ui->tw_descadastrarJogo->setHorizontalHeaderLabels(cabecalhos);
        //Desabilitar edição de conteudo
        ui->tw_descadastrarJogo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        //Selecionando a Linha inteira
        ui->tw_descadastrarJogo->setSelectionBehavior(QAbstractItemView::SelectRows);
        //Desabilitar linhas laterais da tabela tw_contatos
        ui->tw_descadastrarJogo->verticalHeader()->setVisible(false);
        //Cor da seleção
        ui->tw_descadastrarJogo->setStyleSheet("QTableView{selection-background-color:blue}");

        }else{
            QMessageBox::warning(this, "ERRO", "Erro ao pesquisar tabela de contatos");
        }

}

fm_descadastrarJogo::~fm_descadastrarJogo()
{
    delete ui;
}

void fm_descadastrarJogo::on_btn_voltar_clicked(){
    close();
}

void fm_descadastrarJogo::on_btn_descadastrarJogo_clicked()
{
    int linha = ui->tw_descadastrarJogo->currentRow();
    int id = ui->tw_descadastrarJogo->item(linha, 0)->text().toInt();
    QSqlQuery query;
    query.prepare("delete from tb_jogoCadastrado where id='"+QString::number(id)+"'");
    if(query.exec()){
        //removendo a linha da tabela
        ui->tw_descadastrarJogo->removeRow(linha);
        QMessageBox::information(this,"SUCESSO", "Registro excluido com SUCESSO");
    }else{
        QMessageBox::warning(this, "ERRO", "Erro ao excluir registro");
    }
}
