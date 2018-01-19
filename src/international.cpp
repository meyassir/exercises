#include "international.h"


///les constructeurs/deteurs

international::international(string name, int newage, string newposition,int anee_en_etrange ,bool isexperimente)
{
    set_name(name);
    set_posi(newposition);
    set_exp(isexperimente);
    set_age(newage);

    if(anee_en_etrange > newage){
     printf("cumul d'annee doit etre inferieur a l'age\n");
     anee_etrange = 0;
     }
    else anee_etrange = anee_en_etrange;
}

international::international()
{
    set_name("nouvel joueur");
    set_posi("undefined");
    set_exp(false);
    set_age(20);
    anee_etrange = 1;
}

international::~international()
{
    //dtor
}


int international::prime(int inter, int ext)
{
    return joueur::prime(inter, ext)+(5000*anee_etrange);
}
