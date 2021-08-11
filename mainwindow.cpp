#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::validar()
{
    QString altura = ui->inAltura->text();
    QString peso = ui->inPeso->text();

    if((altura.isEmpty()) && (peso.isEmpty())){
        QMessageBox::critical(0, "Aviso importante", "Recuerda llenar los parametros");
        return;
    }
}
float MainWindow::calcular()
{
    QString altura=ui->inAltura->text();
    QString peso=ui->inPeso->text();
    float pesoT = peso.toFloat();
    float alturaT = altura.toFloat();
    float imc;

    imc = pesoT/(alturaT*alturaT);

    return imc;
}
void MainWindow::on_cmdCalcular_released()
{
    validar();
    Imc *i = new Imc;
    i->imprimir(calcular());
    float pesoT= ui->inPeso->text().toFloat();
    i->escribir(pesoT);    
    i->estado_de_salud(calcular());
    i->show();
    this->hide();


}
