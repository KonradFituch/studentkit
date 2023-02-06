#include "mainwindow1.h"
#include "mainwindow.h"
#include "ui_mainwindow1.h"

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

MainWindow1::MainWindow1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow1)
{
    ui->setupUi(this);
}

MainWindow1::~MainWindow1()
{
    delete ui;
}


void MainWindow1::on_actionNowy_triggered()
{
    file_path = "";
    ui->textEdit->setText("");
}


void MainWindow1::on_actionOtw_rz_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(file_name);
    file_path = file_name;
     if(!file.open(QFile::ReadOnly | QFile::Text)){
         QMessageBox::warning(this, "..", "file not open");
         return;
     }
     QTextStream in(&file);
     QString text = in.readAll();
     ui->textEdit->setText(text);
     file.close();
}


void MainWindow1::on_actionZapisz_triggered()
{
    QFile file(file_path);
     if(!file.open(QFile::WriteOnly | QFile::Text)){
         QMessageBox::warning(this, "..", "file not open");
         return;
     }
     QTextStream out(&file);
     QString text = ui->textEdit->toPlainText();
     out << text;
     file.flush();
     file.close();
}


void MainWindow1::on_actionZapisz_jako_triggered()
{
    QString file_name = QFileDialog::getSaveFileName(this, "Open the file");
    QFile file(file_name);
    file_path = file_name;
     if(!file.open(QFile::WriteOnly | QFile::Text)){
         QMessageBox::warning(this, "..", "file not open");
         return;
     }
     QTextStream out(&file);
     QString text = ui->textEdit->toPlainText();
     out << text;
     file.flush();
     file.close();
}


void MainWindow1::on_actionWytnij_triggered()
{
    ui->textEdit->cut();
}


void MainWindow1::on_actionKopiuj_triggered()
{
    ui->textEdit->copy();
}


void MainWindow1::on_actionWklej_triggered()
{
    ui->textEdit->paste();
}


void MainWindow1::on_actionPowt_rz_triggered()
{
    ui->textEdit->redo();
}


void MainWindow1::on_actionCofnij_triggered()
{
    ui->textEdit->undo();
}


void MainWindow1::on_actionO_notatniku_triggered()
{
    QString text_about;
    text_about = "\t\t EDYTOR NOTATEK \nJest to program służący do tworzenia i edytowania notatek. \n \t\t\t\tAutor:  KONRAD FITUCH";
    QMessageBox::about(this,"O Edytorze", text_about);
}

void MainWindow1::on_actionPrzejdz_do_menu_glownego_triggered()
{
    this->close();
    MainWindow *window=new MainWindow;
    window->show();
}

