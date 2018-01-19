#include "entraineur.h"

entraineur::entraineur()
{
    full_name = "unamed";
    prime_anuelle = 30000;
    fin_contrat = 2016;
    duree_contrat = 6;

}

entraineur::entraineur(string nom, int prim, int fin, int duree)
{
    full_name = nom;
    prime_anuelle = prim;
    fin_contrat = fin;
    duree_contrat = duree;

}

entraineur::~entraineur()
{
    //dtor
}

int entraineur::get_debutcontrat(int fin , int duree)
{
    return fin - duree;
}

int entraineur::get_debutcontrat()
{
    return fin_contrat - duree_contrat;
}
