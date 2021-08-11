#include "mainwindow.h"
#include <QTranslator>
#include <QInputDialog>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Crear lista de idiomas
        QStringList idiomas;
        idiomas << "Italiano (IT)" << "Español (ECU)";
        // Solicitar al usuario que elija el idioma
        QString idiomaSel = QInputDialog::getItem(NULL, "Idioma", "Seleccione el idioma", idiomas);
        // Se crea un objeto para manejar la traducciones
        QTranslator traduccion;

        if(idiomaSel == "Italiano (IT)")
        {
            traduccion.load(":/Idiomas/Principal_it_IT.qm");
        }else
        {
            traduccion.load(":/Idiomas/Principal_es_EC.qm");
        }
        // Establecer idioma a la aplicación
        a.installTranslator(&traduccion);
    MainWindow w;
    w.show();
    return a.exec();
}
