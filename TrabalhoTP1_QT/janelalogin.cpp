#include "janelalogin.h"
#include "ui_janelalogin.h"

static QString userTest;

//Definindo Banco de Dados do tipo QSqlDatabase
static QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);

    //Setando localização do banco físico
    bancoDeDados.setDatabaseName("C:/Users/xande/Desktop/Trabalho_TP1_QT/TrabalhoTP1_QT/db/database.db");

    if(!bancoDeDados.open()){
        qDebug()<<"Erro ao abrir Banco de Dados";
    }else{
        qDebug()<<"Banco de Dados carregado com SUCESSO";
    }
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}


void JanelaLogin::on_btn_entrar_clicked()
{
    QString cpf = ui->txt_cpf->text();
    QString senha= ui->txt_senha->text();

    if(!bancoDeDados.isOpen()){
        qDebug()<<"Erro ao abrir Banco de Dados";
    }else{
        qDebug()<<"Banco de dados carregado com SUCESSO";
    }

    QSqlQuery query;
    if(query.exec("select * from tb_usuario where cpf='"+cpf+"' and senha='"+senha+"'")){
        int cont=0;
        while(query.next()){
            cont++;
        }
        if(cont>0){
            this->close();
            fm_principal f_principal;
            f_principal.setModal(true);
            f_principal.exec();

        }else{
            QMessageBox::warning(this, "Erro", "Usuário ou Senha inválidos");
            ui->txt_cpf->clear();
            ui->txt_senha->clear();
            ui->txt_cpf->setFocus();
        }
    }



}

void JanelaLogin::on_btn_cadastrar_clicked()
{
    fm_cadastro cadastro;
    cadastro.exec();
}

void JanelaLogin::on_btn_visualizarJogos_clicked()
{
    fm_visualizarJogos visualizarJogos;
    visualizarJogos.exec();
}
