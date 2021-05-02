#ifndef KLUB_H_INCLUDED
#define KLUB_H_INCLUDED
#include "tim.h"
#include "stadion.h"

class Klub{

private:
    Tim tim;
    Stadion stadion;
    string naziv;
    string grad;
    int osnovan;

public:
    Reprezentacija():tim(), stadion(){
    naziv="Barselona";
    grad = "Barselona";
    osnovan = 1896;
    }
    Reprezentacija(const Tim & t, const Stadion & s, string n, string g, int o){
    tim = t;
    stadion = s;
    naziv = n;
    grad = g;
    osnovan = o;
    }
    Reprezentacija(const Reprezentacija & r):tim(r.tim), stadion(r.stadion){
        naziv = r.naziv;
        grad = r.grad;
        osnovan = r.osnovan;
    }

    Tim getTim()const{return tim;}
    Stadion getStadion()const{return stadion;}
    string getNaziv()const{return naziv;}
    string getGrad()const{return grad;}
    int getOsnovan()const{return osnovan;}

    void setTim(const Tim & t){tim = t;}
    void setStadion(const Stadion & s){stadion = s;}
    void setNaziv(string n){naziv = n;}
    void setGrad(string g){grad = g;}
    void setOsnovan(int o){osnovan = o;}



};

#endif // KLUB_H_INCLUDED
