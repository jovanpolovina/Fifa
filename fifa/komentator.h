#ifndef KOMENTATOR_H_INCLUDED
#define KOMENTATOR_H_INCLUDED
#include "covek.h"

class Komentator:public Covek{
private:
    string jezik;
public:
    Komentator():Covek(){
    jezik = "Engleski";
    }
    Komentator(string i, string p, string j):Covek(i, p){
    jezik = j;
    }
    Komentator(const Komentator & k):Covek(k){
    jezik = k.jezik;
    }

    string getJezik()const{return jezik;}

    void setJezik(string j){jezik = j;}

};


#endif // KOMENTATOR_H_INCLUDED
