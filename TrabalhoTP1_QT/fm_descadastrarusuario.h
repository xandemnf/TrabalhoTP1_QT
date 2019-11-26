#ifndef FM_DESCADASTRARUSUARIO_H
#define FM_DESCADASTRARUSUARIO_H

#include <QDialog>

namespace Ui {
class fm_descadastrarUsuario;
}

class fm_descadastrarUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit fm_descadastrarUsuario(QWidget *parent = nullptr);
    ~fm_descadastrarUsuario();

private:
    Ui::fm_descadastrarUsuario *ui;
};

#endif // FM_DESCADASTRARUSUARIO_H
