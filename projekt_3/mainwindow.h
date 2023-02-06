#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:



    void on_otworz_notatnik_clicked();

    void on_otworz_kalendarz_clicked();

    void on_otworz_planzajec_clicked();

    void on_wjdz_z_programu_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

