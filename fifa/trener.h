#ifndef TRENER_H_INCLUDED
#define TRENER_H_INCLUDED
#include "covek.h"

enum STIL{ODBRAMBRENI, NAPADACKI, BALANSIRANI};
class Trener:public Covek{
private:
    int brojMeceva;
    int godiste;
    std::string iskustvo;
    STIL stil;
public:
    Trener():Covek(){
    brojMeceva = 50;
    godiste = 1962;
    iskustvo = "TRENIRAO za Real, Barselonu,...";
    stil = ODBRAMBRENI;
    }
    Trener(std::string i, std::string p,int broj, int g, std::string d, STIL s):Covek(i, p){
    brojMeceva = broj;
    godiste = g;
    iskustvo = d;
    stil = s;
    }
    Trener(const Trener & t):Covek(t){
    brojMeceva = t.brojMeceva;
    godiste = t.godiste;
    iskustvo = t.iskustvo;
    stil = t.stil;
    }

    int getBrojMeceva()const{return brojMeceva;}
    int getGodiste()const{return godiste;}
    std::string getIskustvo()const{return iskustvo;}
    STIL getStil()const{return stil;}

    void setBrojMeceva(int b){brojMeceva = b;}
    void setGodiste(int g){godiste = g;}
    void setIskustvo(std::string i){iskustvo = i;}
    void setStil(STIL s){stil =s;}

};


#endif // TRENER_H_INCLUDED
