#include "clavier.h"
#include "ui_clavier.h"

#include <QMessageBox>

Clavier::Clavier(CentraleDalarme *_centrale, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Clavier),
    centrale(_centrale)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_1,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_5,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_7,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_8,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_9,&QPushButton::clicked,this,&Clavier::TraiterChiffre);

    connect(&timerLed,&QTimer::timeout,this,&Clavier::onTimerLed_timeout);
}

Clavier::~Clavier()
{
    delete ui;
}

void Clavier::on_pushButtonMarche_clicked()
{

}

void Clavier::TraiterChiffre()
{
    QPushButton *pbouton = (QPushButton *)sender();
    QString texteBouton = pbouton->text();
    centrale->FabriquerCode(texteBouton.toInt());
}

void Clavier::on_pushButtonArret_clicked()
{

}

void Clavier::onTimerLed_timeout()
{

}


