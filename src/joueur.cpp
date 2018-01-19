#include "joueur.h"

///implementation des constructeurs/dteur

joueur::joueur()
{
    age = 20;
    full_name = "nouvel joueur";
    position = "undefined";
    experimente = false;
}

joueur::joueur(string name, int newage, string newposition, bool isexperimente = false)  //accesseur avec paramétre
{
    age = newage;
    full_name = name;
    position = newposition;
    experimente = isexperimente;
}

joueur::~joueur()
{
    //dtor pretty much self explanatory
}


///implementation des accesseur

int joueur::get_age() //accesseur de l'age
{
    return age;
}

string joueur::get_name() //accesseur du nom
{
    return full_name;
}

string joueur::get_pos() //accesseur de la position
{
    return position;
}

bool joueur::is_exp()
{
    return experimente;
}

///implementation des "autres methodes"

int joueur::prime(int inter, int ext) //pour calculer le prime
{
    int total_ext = 30000 * ext;
    int total_int = 20000 * inter;
    int bonus = (experimente ? (total_ext+total_int)/2 : 0); //+50% si le joueur est expérimenté

    return total_ext+total_int+bonus;
}


std::ostream &operator<<(std::ostream &flux, joueur const& player) //surcharge d'operateur de flux <<
{
    string experimente = (player.experimente ? "expirementé": "non-expirementé");
    flux<<"name: "<<player.full_name<<"\t age: "<<player.age<<"\t position: "<<player.position<<"\t"<<experimente<<endl;
    return flux;
}


///setters' implementation

void joueur::set_age(int newage)
{
    age = newage;
}

void joueur::set_posi(string newposition)
{
    position = newposition;
}

void joueur::set_name(string name)
{
    full_name = name;
}

void joueur::set_exp(bool isit)
{
    experimente = isit;
}
