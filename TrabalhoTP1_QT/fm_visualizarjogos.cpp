#include "fm_visualizarjogos.h"
#include "ui_fm_visualizarjogos.h"
#include <QtSql>
#include <QMessageBox>

fm_visualizarJogos::fm_visualizarJogos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_visualizarJogos)
{
    ui->setupUi(this);

    QSqlQuery query;

    query.prepare("select * from tb_jogoCadastrado");

    if(query.exec()){
        int cont=0;
        //setar quantidade de colunas na tabela widget
        ui->tw_visualizarJogos->setColumnCount(9);
        while(query.next()){
            //setar quantidade de linhas na tabela widget
            ui->tw_visualizarJogos->insertRow(cont);
            ui->tw_visualizarJogos->setItem(cont, 0, new QTableWidgetItem(query.value(1).toString()));
            ui->tw_visualizarJogos->setItem(cont, 1, new QTableWidgetItem(query.value(2).toString()));
            ui->tw_visualizarJogos->setItem(cont, 2, new QTableWidgetItem(query.value(3).toString()));
            ui->tw_visualizarJogos->setItem(cont, 3, new QTableWidgetItem(query.value(4).toString()));
            ui->tw_visualizarJogos->setItem(cont, 4, new QTableWidgetItem(query.value(5).toString()));
            ui->tw_visualizarJogos->setItem(cont, 5, new QTableWidgetItem(query.value(6).toString()));
            ui->tw_visualizarJogos->setItem(cont, 6, new QTableWidgetItem(query.value(7).toString()));
            ui->tw_visualizarJogos->setItem(cont, 7, new QTableWidgetItem(query.value(8).toString()));
            ui->tw_visualizarJogos->setItem(cont, 8, new QTableWidgetItem(query.value(9).toString()));
            //ui->tw_visualizarJogos->setItem(cont, 9, new QTableWidgetItem(query.value(10).toString()));
            ui->tw_visualizarJogos->setRowHeight(cont,20);
            cont++;
        }
        //Setando tamanho das colunas no widget tw_contatos
        ui->tw_visualizarJogos->setColumnWidth(0,30);
        ui->tw_visualizarJogos->setColumnWidth(1,150);
        ui->tw_visualizarJogos->setColumnWidth(3,250);
        //setando lista de cabeçalho
        QStringList cabecalhos={"Cód. Jogo","Nome Jogo","Cód. Ingresso","Data", "Hora", "Preço", "Nome Estádio","Cidade", "Estado"};
        ui->tw_visualizarJogos->setHorizontalHeaderLabels(cabecalhos);
        //Desabilitar edição de conteudo
        ui->tw_visualizarJogos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        //Selecionando a Linha inteira
        ui->tw_visualizarJogos->setSelectionBehavior(QAbstractItemView::SelectRows);
        //Desabilitar linhas laterais da tabela tw_contatos
        ui->tw_visualizarJogos->verticalHeader()->setVisible(false);
        //Cor da seleção
        ui->tw_visualizarJogos->setStyleSheet("QTableView{selection-background-color:blue}");

        }else{
            QMessageBox::warning(this, "ERRO", "Erro ao pesquisar tabela de contatos");
        }















    //--------------------------


}

fm_visualizarJogos::~fm_visualizarJogos()
{
    delete ui;
}

//Função vai fechar a janela Visualizar Jogos
void fm_visualizarJogos::on_btn_voltar_clicked(){
    close();
}
