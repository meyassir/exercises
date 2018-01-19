#ifndef INTERNATIONAL_H
#define INTERNATIONAL_H
#include <iostream>
#include <joueur.h>

using namespace std;

class international : public joueur
{
    public:
        international(); //ctor
        international(string name, int newage, string newposition,int anee_en_etrange ,bool isexperimente);  //ctor surchargée
        virtual ~international(); //dtor *useless*


        int prime(int inter, int ext);


    protected:

    private:
    int anee_etrange;
};

#endif // INTERNATIONAL_H
