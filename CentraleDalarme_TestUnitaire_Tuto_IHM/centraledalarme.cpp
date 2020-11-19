#include <QDebug>
#include "centraledalarme.h"
#include "clavier.h"

CentraleDalarme::CentraleDalarme(const int _tailleCode, QObject *_parent) :
    QObject(_parent),
    tailleCode(_tailleCode),
    indiceCourant(0)
{
    combinaison = new quint8[tailleCode];
    for(int i = 0 ; i < tailleCode ; i++)
        combinaison[i]=200;

    leClavier = new Clavier(this);
    leClavier->show();
}

CentraleDalarme::~CentraleDalarme()
{
    delete[] combinaison;
    delete leClavier;
}

void CentraleDalarme::FabriquerCode(const quint8 _chiffre)
{
    // Code à compléter



    using namespace std;
        if(indiceCourant != tailleCode){

            if(combinaison[indiceCourant] == 200){
                combinaison[indiceCourant] =_chiffre;
            }

             indiceCourant ++;
        }

        else{
            for(int i=0;i<tailleCode;i++){
                combinaison[i]=combinaison[i+1];
            }

            combinaison[indiceCourant-1] =_chiffre;
        }

    // Affichage de la combinaison lors de sa construction
    QString tampon = "Combinaison = ";

    for(int i = 0 ; i < tailleCode; i++)
   if(combinaison[i] != 200){
        tampon += QString::number(combinaison[i]);
    qDebug() << tampon;
   }


}
