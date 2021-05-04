#ifndef KLUB_H_INCLUDED
#define KLUB_H_INCLUDED
#include "tim.h"
#include "stadion.h"

class Klub{

private:
    Tim tim;
    Stadion stadion;
    std::string naziv;
    std::string grad;
    int osnovan;

public:
    Klub():tim(), stadion(){
    naziv="Barselona";
    grad = "Barselona";
    osnovan = 1896;
    }
    Klub(const Tim & t, const Stadion & s, std::string n, std::string g, int o){
    tim = t;
    stadion = s;
    naziv = n;
    grad = g;
    osnovan = o;
    }
    Klub(const Klub & r):tim(r.tim), stadion(r.stadion){
        naziv = r.naziv;
        grad = r.grad;
        osnovan = r.osnovan;
    }

    Tim getTim()const{return tim;}
    Stadion getStadion()const{return stadion;}
    std::string getNaziv()const{return naziv;}
    std::string getGrad()const{return grad;}
    int getOsnovan()const{return osnovan;}

    void setTim(const Tim & t){tim = t;}
    void setStadion(const Stadion & s){stadion = s;}
    void setNaziv(std::string n){naziv = n;}
    void setGrad(std::string g){grad = g;}
    void setOsnovan(int o){osnovan = o;}



};

#endif // KLUB_H_INCLUDED
