#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QMainWindow>

namespace Ui {
class MainWindow1;
}

class MainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow1(QWidget *parent = nullptr);
    ~MainWindow1();
private slots:
    void on_actionNowy_triggered();

    void on_actionOtw_rz_triggered();

    void on_actionZapisz_triggered();

    void on_actionZapisz_jako_triggered();

    void on_actionWytnij_triggered();

    void on_actionKopiuj_triggered();

    void on_actionWklej_triggered();

    void on_actionPowt_rz_triggered();

    void on_actionCofnij_triggered();

    void on_actionO_notatniku_triggered();
    void on_actionPrzejdz_do_menu_glownego_triggered();

private:
    Ui::MainWindow1 *ui;
    QString file_path;
};

#endif // MAINWINDOW1_H
