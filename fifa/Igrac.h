#ifndef IGRAC_H_INCLUDED
#define IGRAC_H_INCLUDED
#include "covek.h"

enum POZICIJA{golman, odbrana, sredina, napad};
class Igrac:public Covek{
    private:
int godiste;
POZICIJA pozicija;
int golovi;
bool povredjen;
    public:
        Igrac():Covek(){
        godiste = 2000;
        pozicija = sredina;
        golovi = 100;
        povredjen = false;
        }
        Igrac(std::string i, std::string p, int g,POZICIJA po, int go, bool povre):Covek(i, p){
        godiste = g;
        pozicija = po;
        golovi = go;
        povredjen = povre;
        }
        Igrac(const Igrac & i):Covek(i){
        godiste = i.godiste;
        pozicija = i.pozicija;
        golovi = i.golovi;
        povredjen = i.povredjen;
        }

        int getGodiste()const{return godiste;}
        POZICIJA getPozicija()const{return pozicija;}
        int getGolovi()const{return golovi;}
        bool getPovredjen()const{return povredjen;}

        void setGodiste(int g){godiste =g;}
        void setPozicija(POZICIJA p){pozicija = p;}
        void setGolovi(int go){golovi = go;}
        void setPovredjen(bool p){povredjen = p;}



};


#endif // IGRAC_H_INCLUDED
