#ifndef IMC_H
#define IMC_H

#include <QMainWindow>
#include <QDebug>

namespace Ui {
class Imc;
}

class Imc : public QMainWindow
{
    Q_OBJECT

public:
    explicit Imc(QWidget *parent = nullptr);

    Imc(QString altura, QString peso);
    void imprimir(float imc);
    void escribir(float peso);
    void estado_de_salud(float imc);

    ~Imc();
private:

    Ui::Imc *ui;

    QString m_altura;
    QString m_peso ;
    QString m_imc;
};

#endif // IMC_H
