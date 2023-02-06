#include "mainwindow4.h"
#include "ui_mainwindow4.h"
#include <QFile>

MainWindow4::MainWindow4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow4)
{
    ui->setupUi(this);
}

MainWindow4::~MainWindow4()
{
    delete ui;
}
FormularzZadan::FormularzZadan(QWidget *parent)
    : QDialog(parent)
{
    m_dzien = new QLineEdit;
    m_nazwaZadania = new QLineEdit;
    m_nazwaPrzedmiotu = new QLineEdit;
    m_opisZadania = new QTextEdit;
    m_dataWykonania = new QDateEdit;
    QFormLayout *formLayout = new QFormLayout;
    formLayout->addRow("Dzień:", m_dzien);
    formLayout->addRow("Nazwa zadania:", m_nazwaZadania);
    formLayout->addRow("Nazwa przedmiotu:", m_nazwaPrzedmiotu);
    formLayout->addRow("Opis zadania:", m_opisZadania);
    formLayout->addRow("Data wykonania:", m_dataWykonania);
    QPushButton *dodajButton = new QPushButton("Dodaj");
    QPushButton *anulujButton = new QPushButton("Anuluj");
    formLayout->addRow(dodajButton);
    formLayout->addRow(anulujButton);
    setLayout(formLayout);

    connect(dodajButton, &QPushButton::clicked, this, &QDialog::accept);
    connect(anulujButton, &QPushButton::clicked, this, &QDialog::reject);
}

QString FormularzZadan::dzien() const
{
    return m_dzien->text();
}

QString FormularzZadan::nazwaZadania() const
{
    return m_nazwaZadania->text();
}

QString FormularzZadan::nazwaPrzedmiotu() const
{
    return m_nazwaPrzedmiotu->text();
}

QString FormularzZadan::opisZadania() const
{
    return m_opisZadania->toPlainText();
}

QDate FormularzZadan::dataWykonania() const
{
    return m_dataWykonania->date();
}

void FormularzZadan::zapiszDoPliku()
{
    QFile plik("zadania.txt");
    if (!plik.exists()) {
    plik.open(QFile::WriteOnly | QFile::Text);
    } else {
    plik.open(QFile::WriteOnly | QFile::Append | QFile::Text);
    }
    QTextStream out(&plik);
    out << dzien() << "\t" << nazwaZadania() << "\t" << nazwaPrzedmiotu() << "\t" << opisZadania() << "\t" << dataWykonania().toString() << "\n";
    plik.close();
}


