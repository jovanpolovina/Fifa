#ifndef PACK_H_INCLUDED
#define PACK_H_INCLUDED
#include "Igrac.h"

enum VRSTA {bronze, silver, gold, legendary};

class Pack{
private:
Igrac igrac;
float coins;
bool otvoren;
VRSTA vrsta;
public:
    Pack():igrac(){
    coins = 0;
    otvoren = false;
    vrsta = legendary;
    }
    Pack(const Igrac & i, float c, bool o, VRSTA v):igrac(i){
    coins = c;
    otvoren = o;
    vrsta = v;
    }
    Pack(const Pack & p):igrac(p.igrac){
    coins = p.coins;
    otvoren = p.otvoren;
    vrsta = p.vrsta;
    }

    Igrac getIgrac()const{return igrac;}
    float getCoins()const{return coins;}
    bool getOtvoren()const{return otvoren;}
    VRSTA getVrsta()const{return vrsta;}

    void setIgrac(Igrac i){igrac = i;}
    void setCoins(float c){coins = c;}
    void setOtvoren(bool o){otvoren = o;}
    void setVrsta(VRSTA v){vrsta = v;}

};




#endif // PACK_H_INCLUDED
