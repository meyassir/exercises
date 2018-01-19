#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>

using namespace std;



class joueur
{
    public:
        joueur(); //constructeur sans paramétre
        joueur(string name, int newage, string newposition, bool isexperimente); //constructeur surchargée avec paramétre
        virtual ~joueur(); //deconstructeur *useless unless you have pointers*



    ///getters || accesseurs
        int get_age(); //accesseur pour obtenir l'àge
        string get_name();// accesseur pour obtenir le nom complet
        string get_pos(); //accesseur pour obtenir la position dans le terrain
        bool is_exp();//     acc     pour determiner si le joueur est experimenté



    ///setters || idfk it's name in french
        void set_age(int newage);
        void set_name(string newname);
        void set_posi(string newposition);
        void set_exp(bool isit);



    ///other methods || autre methode
        friend ostream &operator<<(ostream &flux, joueur const& player); //operateur de flux <<, pour afficher les info du joueur
        int prime(int inter, int ext); //methode pour calculer le prime du joueur

    protected:

    private:

    string full_name; //nome du joueur *obviously*
    int age; //l'age du joueur *duh*
    string position; //position du joueur dans le terrain
    bool experimente; //si le joueur est experimenté
};

#endif // JOUEUR_H
