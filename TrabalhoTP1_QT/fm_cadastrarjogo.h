#ifndef FM_CADASTRARJOGO_H
#define FM_CADASTRARJOGO_H

#include <QDialog>
#include <janelalogin.h>

namespace Ui {
class fm_cadastrarJogo;
}

class fm_cadastrarJogo : public QDialog
{
    Q_OBJECT

public:
    explicit fm_cadastrarJogo(QWidget *parent = nullptr);
    ~fm_cadastrarJogo();

private slots:
    void on_btn_cadastrarJogo_clicked();



    void on_btn_voltar_clicked();

private:
    Ui::fm_cadastrarJogo *ui;
};

#endif // FM_CADASTRARJOGO_H
