#include "mainwindow2.h"
#include "mainwindow.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_actionPowr_t_do_menu_g_wnego_triggered()
{
    this->close();
    MainWindow *window=new MainWindow;
    window->show();
}

