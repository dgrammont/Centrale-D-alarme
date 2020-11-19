#include "code.h"

Code::Code(const int _taillCode)
{
    tailleCode = _taillCode;
    codeUsine = new quint8[_taillCode];
    codeUtilisateur = new quint8[_taillCode];
    for(int i=0;i<_taillCode;i++){
        codeUsine[i]=i+1;
        codeUtilisateur[i]=0;
    }

}

Code::~Code()
{

}

bool Code::VerifierCode(const quint8 *unCode)
{
    bool codeVerif=false;
    int verifUti=0;
    int verifUsine=0;
    for(int i=0;i<tailleCode;i++){
        if( unCode[i] == codeUtilisateur[i]){
            verifUti++;
        }
    }
    for(int i=0;i<tailleCode;i++){
        if(unCode[i] == codeUsine[i] ){
            verifUsine++;
        }
    }
    if(verifUti==4 || verifUsine==4){
        codeVerif=true;
    }
    return codeVerif;
}


void Code::Memoriser(const quint8 *unCode)
{
    for(int i=0;i<tailleCode;i++ ){
        codeUtilisateur[i] = unCode[i];
    }

}

