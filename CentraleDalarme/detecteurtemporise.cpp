#include "detecteurtemporise.h"
#include <qmessagebox.h>
DetecteurTemporise::DetecteurTemporise()
{
    setWindowTitle("Détecteur Temporisé");
    connect(&leTimer,&QTimer::timeout,this,&DetecteurTemporise::message);

}

void DetecteurTemporise::message()
{
    QMessageBox messageIntrue;
    messageIntrue.setText("un Intrue a été détectée");
    messageIntrue.exec();
    leTimer.stop();
}
void DetecteurTemporise::on_pushButtonIntrus_clicked()
{

leTimer.start(3000);



}
