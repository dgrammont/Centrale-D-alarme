#ifndef DETECTEURTEMPORISE_H
#define DETECTEURTEMPORISE_H
#include "detecteur.h"
#include "QTimer"

class DetecteurTemporise : public Detecteur
{
public:
    DetecteurTemporise();
private:
    QTimer leTimer;
    void message();
private slots:
    virtual void on_pushButtonIntrus_clicked();
};

#endif // DETECTEURTEMPORISE_H
