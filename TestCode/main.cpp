#include <QCoreApplication>
#include "code.h"
#include <QtGlobal>
#include <iostream>
#define TAILLE_CODE 4
int main(int argc, char *argv[])
{

    using namespace std;

    Code unCode(TAILLE_CODE);
    quint8 chiffre[TAILLE_CODE];
    cout << "saisire un code a 4 chiffre" << endl;
    for(int i=0;i<TAILLE_CODE;i++){

    cin >> chiffre[i];

    }
    unCode.Memoriser(chiffre-'0');
    cout << "saisire un code a 4 chiffre" << endl;
    for(int i=0;i<TAILLE_CODE;i++){

    cin >> chiffre[i];

    }
    if(unCode.VerifierCode(chiffre-'0'))
        cout<< "oui"<<endl;
    else
        cout<<"non"<<endl;

    return 0;
}
