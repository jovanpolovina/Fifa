#ifndef DRES_H_INCLUDED
#define DRES_H_INCLUDED

enum BOJE {plava, crvena, bela, crna, zelena};
enum SPONZOR {nike, adidas, beko, philips, gasprom, sony};
class Dres{
private:
bool sare;
    BOJE boja;
    SPONZOR sponzor;
public:
    Dres(){
    boja = crvena;
    sponzor = beko;
    sare = true;
    }
    Dres(bool ss, BOJE b, SPONZOR s){
    sare = ss;
    boja = b;
    sponzor = s;
    }
    Dres(const Dres & d){
    sare = d.sare;
    boja = d.boja;
    sponzor = d.sponzor;
    }

    bool getSare()const{return sare;}
    BOJE getBoja()const{return boja;}
    SPONZOR getSponzor()const{return sponzor;}

    void setSare(bool s){sare = s;}
    void setBoja(BOJE b){boja = b;}
    void setSponzor(SPONZOR s){sponzor = s;}

};

#endif // DRES_H_INCLUDED
