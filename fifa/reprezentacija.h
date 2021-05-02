#ifndef REPREZENTACIJA_H_INCLUDED
#define REPREZENTACIJA_H_INCLUDED
#include "tim.h"
#include "stadion.h"

class Reprezentacija{
private:
    Tim tim;
    Stadion stadion;
    string naziv;
public:
    Reprezentacija():tim(), stadion(){
    naziv="Spanija";
    }
    Reprezentacija(const Tim & t, const Stadion & s, string n){
    tim = t;
    stadion = s;
    naziv = n;
    }
    Reprezentacija(const Reprezentacija & r):tim(r.tim), stadion(r.stadion){
        naziv = r.naziv;
    }

    Tim getTim()const{return tim;}
    Stadion getStadion()const{return stadion;}
    string getNaziv()const{return naziv;}

    void setTim(const Tim & t){tim = t;}
    void setStadion(const Stadion & s){stadion = s;}
    void setNaziv(string n){naziv = n;}



};

#endif // REPREZENTACIJA_H_INCLUDED
