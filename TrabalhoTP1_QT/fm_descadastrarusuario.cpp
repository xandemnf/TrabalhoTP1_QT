#include "fm_descadastrarusuario.h"
#include "ui_fm_descadastrarusuario.h"

fm_descadastrarUsuario::fm_descadastrarUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_descadastrarUsuario)
{
    ui->setupUi(this);
}

fm_descadastrarUsuario::~fm_descadastrarUsuario()
{
    delete ui;
}
