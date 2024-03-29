#ifndef JANELALOGIN_H
#define JANELALOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "fm_principal.h"
#include <QMessageBox>
#include "fm_cadastro.h"
#include "fm_visualizarjogos.h"

QT_BEGIN_NAMESPACE
namespace Ui { class JanelaLogin; }
QT_END_NAMESPACE

class JanelaLogin : public QMainWindow
{
    Q_OBJECT

public:
    JanelaLogin(QWidget *parent = nullptr);
    ~JanelaLogin();

private slots:
    void on_btn_entrar_clicked();

    void on_btn_cadastrar_clicked();

    void on_btn_visualizarJogos_clicked();

private:
    Ui::JanelaLogin *ui;
};
#endif // JANELALOGIN_H
