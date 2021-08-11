#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

#include "imc.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    float calcular();

    void validar();
    void datos();

private slots:
   void on_cmdCalcular_released();

private:

    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
