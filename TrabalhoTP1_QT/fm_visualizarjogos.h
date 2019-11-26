#ifndef FM_VISUALIZARJOGOS_H
#define FM_VISUALIZARJOGOS_H

#include <QDialog>

namespace Ui {
class fm_visualizarJogos;
}

class fm_visualizarJogos : public QDialog
{
    Q_OBJECT

public:
    explicit fm_visualizarJogos(QWidget *parent = nullptr);
    ~fm_visualizarJogos();

private slots:
    void on_btn_voltar_clicked();

private:
    Ui::fm_visualizarJogos *ui;
};

#endif // FM_VISUALIZARJOGOS_H
