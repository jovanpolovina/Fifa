#ifndef TABELA_H_INCLUDED
#define TABELA_H_INCLUDED
#include

enum SLOVO{A,B,C,D,E,F,G,H, LIGA};
class Tabela{
private:
    List<> timovi;
    SLOVO slovo;
public:
    Tabela(){
    timovi = NULL;
    slovo = LIGA;
    }
    Tabela(List<> t, SLOVO s){
    timovi = t;
    slovo = s;
    }
    Tabela(const Tabela & t){
    timovi = t.timovi;
    slovo = t.slovo;
    }

    List<> getTimovi()const{return timovi;}
    SLOVO getSlovo()const{return slovo;}

    void setTimovi(List<> t){timovi = t;}
    void setSlovo(SLOVO s){slovo = s;}


};



#endif // TABELA_H_INCLUDED
