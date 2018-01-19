#ifndef ENTRAINEUR_H
#define ENTRAINEUR_H

#include <iostream>
using namespace std;

class entraineur
{
    public:
    ///constructeurs and dteurs
        entraineur(string nom, int prim, int fin, int duree);
        entraineur(); //cto
        virtual ~entraineur(); //dtor
    ///other methodes

    int get_debutcontrat();
    static int get_debutcontrat(int fin, int duree); //note that it is static for convenience (;

    protected:

    private:

    ///members notice they're private cuz encapsulation and what not

    string full_name;
    int fin_contrat;
    int duree_contrat;
    int prime_anuelle;

};

#endif // ENTRAINEUR_H
