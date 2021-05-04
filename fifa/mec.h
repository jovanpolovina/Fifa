#ifndef MEC_H_INCLUDED
#define MEC_H_INCLUDED
#include "reprezentacija.h"
#include "klub.h"
#include "stadion.h"
#include "sudija.h"
#include "lopta.h"
#include "weather.h"
enum NASTAVAK {nista, produzeci, zlatangol};

template<class T, class U>
class Mec{
private:
T tim1;
U tim2;
NASTAVAK nastavak;
bool penali;
int rezultat[2];
Stadion stadion;
Sudija sudija;
Lopta lopta;
Weather weather;

public:
    Mec():tim1(), tim2(), stadion(), sudija(), lopta(), weather(){
    penali = false;
    rezultat[0] = 0;
    rezultat[1] = 0;
    nastavak = nista;
    }
    Mec(const T & t1, const U & t2, NASTAVAK n, bool p, int r[2],
         const Stadion & s, const Sudija & ss, const Lopta & l, const Weather & w):tim1(t1), tim2(t2), stadion(s), sudija(ss), lopta(l), weather(w){
    nastavak = n;
    if(nastavak == nista){
        penali = false;
    }else{
    penali = p;
    }
    int rezultat = r;
    }
    Mec(const Mec & m):tim1(m.tim1), tim2(m.tim2), stadion(m.stadion), sudija(m.sudija), lopta(m.lopta), weather(m.weather){
    nastavak = m.nastavak;
    penali = m.penali;
    rezultat = m.rezultat;
    }

    T getTim1()const{return tim1;}
    U getTim2()const{return tim2;}
    NASTAVAK getNastavak()const{return nastavak;}
    bool getPenali()const{return penali;}
    int getRezultat(int i)const {return rezultat[i];}
    Sudija getSudija()const{return sudija;}
    Lopta getLopta()const{return lopta;}
    Weather getWeather()const{return weather;}

    void setTim1(T t1){tim1 = t1;}
    void setTim2(U t2){tim2 = t2;}
    void setNastavak(NASTAVAK n){nastavak = n;}
    void setPenali(bool p){penali = p;}
    void setRezultat(int r[2]){rezultat = r;}
    void setStadion(Stadion s){stadion = s;}
    void setSudija(Sudija s){sudija = s;}
    void setLopta(Lopta l){lopta = l;}
    void setWeather(Weather w){weather = w;}




};


#endif // MEC_H_INCLUDED
