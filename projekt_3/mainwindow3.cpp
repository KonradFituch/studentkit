#include "mainwindow3.h"
#include "mainwindow.h"
#include "ui_mainwindow3.h"

MainWindow3::MainWindow3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow3)
{
    ui->setupUi(this);
}

MainWindow3::~MainWindow3()
{
    delete ui;
}

void MainWindow3::on_actionPowr_t_do_menu_g_wnego_triggered()
{
    this->close();
    MainWindow *window=new MainWindow;
    window->show();
}


