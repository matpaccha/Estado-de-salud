#include "imc.h"
#include "ui_imc.h"

Imc::Imc(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Imc)
{
    ui->setupUi(this);
}

Imc::Imc(QString altura, QString peso)
{
    m_altura = altura;
    m_peso = peso;
}


void Imc::imprimir(float imc)
{
    ui->outIMC->setText(QString::number(imc));
}

void Imc::escribir(float peso)
{
    ui->outPesoA->setText(QString::number(peso));
    ui->outPesoMin->setText(QString::number(peso));
    ui->outPesoMax->setText(QString::number(peso));
}

void Imc::estado_de_salud(float imc)
{
    if(imc<18.5)
            {
        ui->outSalud->setText("Usted esta bajo de peso!");
            }
            else if(imc<24.9)
            {
        ui->outSalud->setText("Usted esta saludable!");
            }

            else if(imc<29)
            {
        ui->outSalud->setText("Usted tiene sobrepeso!");
            }
            else if(imc>=30)
            {
        ui->outSalud->setText("Usted tiene obesidad!");
            }
}





Imc::~Imc()
{
    delete ui;
}
