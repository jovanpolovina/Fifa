#ifndef TABELA_H_INCLUDED
#define TABELA_H_INCLUDED
#include "klub.h"
#include "reprezentacija.h"

enum SLOVO{A,B,C,D,E,F,G,H, LIGA};
template<class T>
class Tabela{
private:
    List<T> timovi;
    SLOVO slovo;
    int* bodovi;
public:
    Tabela(){
    timovi = NULL;
    slovo = LIGA;
    bodovi = malloc(sizeof(int)*timovi.size());
    memset(bodovi, 0, sizeof(int)*timovi.size());
    }
    Tabela(List<T> t, SLOVO s, int* b){
    timovi = t;
    slovo = s;
    bodovi = b;
    }
    Tabela(const Tabela & t){
    timovi = t.timovi;
    slovo = t.slovo;
    bodovi = t.bodovi;
    }

    List<T> getTimovi()const{return timovi;}
    SLOVO getSlovo()const{return slovo;}
    int* getBodovi()const{return bodovi;}

    void setTimovi(List<T> t){timovi = t;}
    void setSlovo(SLOVO s){slovo = s;}
    void setBodovi(int* b){bodovi = b;}


};



#endif // TABELA_H_INCLUDED
