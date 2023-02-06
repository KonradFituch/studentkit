#ifndef MAINWINDOW4_H
#define MAINWINDOW4_H

#include <QMainWindow>

namespace Ui {
class MainWindow4;
}

class MainWindow4 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow4(QWidget *parent = nullptr);
    ~MainWindow4();

private:
    Ui::MainWindow4 *ui;
};

#endif // MAINWINDOW4_H
#include <QDialog>
#include <QFormLayout>
#include <QDateEdit>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>

class FormularzZadan : public QDialog
{
    Q_OBJECT

public:
    FormularzZadan(QWidget *parent = 0);
    QString dzien() const;
    QString nazwaZadania() const;
    QString nazwaPrzedmiotu() const;
    QString opisZadania() const;
    QDate dataWykonania() const;
    void zapiszDoPliku();
    void wroc_do_menu_glownego();

private:
    QLineEdit *m_dzien;
    QLineEdit *m_nazwaZadania;
    QLineEdit *m_nazwaPrzedmiotu;
    QTextEdit *m_opisZadania;
    QDateEdit *m_dataWykonania;
};


