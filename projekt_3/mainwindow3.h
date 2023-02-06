#ifndef MAINWINDOW3_H
#define MAINWINDOW3_H

#include <QMainWindow>

namespace Ui {
class MainWindow3;
}

class MainWindow3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow3(QWidget *parent = nullptr);
    ~MainWindow3();

private slots:
    void on_actionPowr_t_do_menu_g_wnego_triggered();

private:
    Ui::MainWindow3 *ui;
};

#endif // MAINWINDOW3_H
