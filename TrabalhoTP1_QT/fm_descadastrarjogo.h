#ifndef FM_DESCADASTRARJOGO_H
#define FM_DESCADASTRARJOGO_H

#include <QDialog>

namespace Ui {
class fm_descadastrarJogo;
}

class fm_descadastrarJogo : public QDialog
{
    Q_OBJECT

public:
    explicit fm_descadastrarJogo(QWidget *parent = nullptr);
    ~fm_descadastrarJogo();

private slots:
    void on_btn_voltar_clicked();


    void on_btn_descadastrarJogo_clicked();

private:
    Ui::fm_descadastrarJogo *ui;
};

#endif // FM_DESCADASTRARJOGO_H
