#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "mainwindow1.h"
//#include "mainwindow2.h"
#include <mainwindow4.h>
#include "mainwindow3.h"
#include <QString>
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



void MainWindow::on_otworz_notatnik_clicked()
{
    this->close();
    MainWindow1 *window1=new MainWindow1;
    window1->show();

}


void MainWindow::on_otworz_kalendarz_clicked()
{
    this->close();
    /*MainWindow2 *window2=new MainWindow2;
    window2->show();*/
    FormularzZadan *form = new FormularzZadan(this);
    form->setWindowTitle("Zadania do wykonania");
    QString styleSheet =
            "QMainWindow {"
            "background-color: #87CEEB;"
            "}"
            "QLineEdit {"
            "background-color: white;"
            "}"
            "QPushButton {"
            "background-color: #87CEFA;"
            "}"
            "QPushButton:pressed {"
            "background-color: #00BFFF;"
            "}";
        form->setStyleSheet(styleSheet);
    if (form->exec() == QDialog::Accepted) {
    form->zapiszDoPliku();
    MainWindow *window=new MainWindow(this);
    window->show();
    }
    else if (form->exec() == QDialog::Rejected){
     form->close();
     MainWindow *window=new MainWindow(this);
     window->show();
    }

}


void MainWindow::on_otworz_planzajec_clicked()
{
    this->close();
    MainWindow3 *window3=new MainWindow3;
    window3->show();
}


void MainWindow::on_wjdz_z_programu_clicked()
{
    this->close();
}

