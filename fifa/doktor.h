#ifndef DOKTOR_H_INCLUDED
#define DOKTOR_H_INCLUDED
#include "covek.h"

enum SPEC {fizioterapeut, psiholog, kardiovaskularni};
class Doktor:public Covek{

private:
SPEC spec;
public:
    Doktor():Covek(){
    spec = fizioterapeut;
    }
    Doktor(string i, string p, SPEC s):Covek(i, p){
    spec = s;
    }
    Doktor(const Doktor & d):Covek(d){
    spec = d.spec;
    }

    SPEC getSpec()const{return spec;}
    void setSpec(SPEC s){spec = s;}

};


#endif // DOKTOR_H_INCLUDED
