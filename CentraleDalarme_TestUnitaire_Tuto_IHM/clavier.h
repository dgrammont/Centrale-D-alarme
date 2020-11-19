#ifndef CLAVIER_H
#define CLAVIER_H

#include <QMainWindow>
#include <QTimer>
#include "detecteur.h"
#include "detecteurtemporise.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Clavier; }
QT_END_NAMESPACE

class Clavier : public QMainWindow
{
    Q_OBJECT

public:
    Clavier(QWidget *parent = nullptr);
    ~Clavier();

private slots:
    void TraiterChiffre();

    void on_pushButton_arret_clicked();

    void on_pushButton_marche_clicked();
    void onTimerLed_timeout();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Clavier *ui;
    QTimer timerLed;
    Detecteur *leDetecteur=nullptr;
    DetecteurTemporise *leDecteurTemporise=nullptr;

};
#endif // CLAVIER_H
