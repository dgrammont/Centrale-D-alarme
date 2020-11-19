#include "clavier.h"
#include "ui_clavier.h"
#include "QMessageBox"
#include <QTimer>

Clavier::Clavier(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Clavier)
{
    ui->setupUi(this);
    connect(ui->pushButton_0,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_1,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    //connect(ui->pushButton_2,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    //connect(ui->pushButton_3,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    //connect(ui->pushButton_4,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    //connect(ui->pushButton_5,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
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




void Clavier::TraiterChiffre()
{
    QPushButton *pbouton = static_cast<QPushButton *>(sender());
    QString texteBouton = pbouton->text();
    QMessageBox messageChiffre;
    messageChiffre.setText("j'ai appuyé sur la touche "+texteBouton);
    messageChiffre.exec();
}

void Clavier::on_pushButton_arret_clicked()
{

        ui->checkBox_rouge->setCheckState(Qt::Unchecked);

    timerLed.stop();
}

void Clavier::on_pushButton_marche_clicked()
{
    ui->checkBox_rouge->setCheckState(Qt::Checked);
    timerLed.start(500);
}

void Clavier::onTimerLed_timeout()
{
    if(ui->checkBox_rouge->checkState() == Qt::Checked)
        ui->checkBox_rouge->setCheckState(Qt::Unchecked);
    else
        ui->checkBox_rouge->setCheckState(Qt::Checked);

}



void Clavier::on_pushButton_2_clicked()
{
    if(leDetecteur==nullptr){
        leDetecteur=new Detecteur;
        //leDetecteur->exec(); force l'affichage de la boîte de dialogue en mode modal (la valeur définie par setModal est ignorée) ;
        leDetecteur->show();// force l'affichage de la boîte de dialogue ;
        }

}

void Clavier::on_pushButton_3_clicked()
{
    if(leDetecteur!=nullptr){
        leDetecteur->hide();
        delete leDetecteur;
        leDetecteur=nullptr;
        }
}



void Clavier::on_pushButton_4_clicked()
{
    if(leDecteurTemporise==nullptr){
       leDecteurTemporise=new DetecteurTemporise;
       //leDetecteur->exec(); force l'affichage de la boîte de dialogue en mode modal (la valeur définie par setModal est ignorée) ;
       leDecteurTemporise->show();// force l'affichage de la boîte de dialogue ;
       }

}

void Clavier::on_pushButton_5_clicked()
{
    if(leDecteurTemporise!=nullptr){
        leDecteurTemporise->hide();
        delete leDecteurTemporise;
        leDecteurTemporise=nullptr;
        }
}
