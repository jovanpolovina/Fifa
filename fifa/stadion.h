#ifndef STADION_H_INCLUDED
#define STADION_H_INCLUDED
#include "tribina.h"

class Stadion{

private:
string ime;
int izgradjen;
Tribina* tribine;
public:
    Stadion(){
    ime = "Camp Nou";
    izgradjen = 1900;
    tribine = malloc(sizeof(tribina)*4);
    }

    Stadion(string i, int iz, Tribina* t){
    ime = i;
    izgradjen = iz;
    tribine = t;
    }

    Stadion(const Stadion & s){
    ime = s.ime;
    izgradjen = s.izgradjen;
    tribine = s.tribine;
    }

    string getIme()const{return ime;}
    int getIzgradjen()const{return izgradjen;}
    Tribina* getTribine()const{return tribine;}

    void setIme(string i){ime = i;}
    void setIzgradjen(int i){izgradjen = i;}
    void setTribine(Tribine* t){tribine = t;}

};


#endif // STADION_H_INCLUDED
