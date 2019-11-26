#ifndef FM_CADASTRO_H
#define FM_CADASTRO_H

#include <QDialog>
#include <QtSql>
#include "fm_cadastrarjogo.h"

namespace Ui {
class fm_cadastro;
}

class fm_cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit fm_cadastro(QWidget *parent = nullptr);
    ~fm_cadastro();

private slots:
    void on_btn_salvar_clicked();

    void on_btn_voltar_clicked();

private:
    Ui::fm_cadastro *ui;
};

#endif // FM_CADASTRO_H
