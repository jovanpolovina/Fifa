#ifndef TRIBINA_H_INCLUDED
#define TRIBINA_H_INCLUDED

enum STRANA{istok, zapad, sever, jug, VIP};
class Tribina{

private:
int brojSedista;
STRANA strana;
int brojUlaza;
public:
    Tribina(){
    brojSedista = 100;
    strana = zapad;
    brojUlaza = 2;
    }
    Tribina(int brojS, STRANA s, int brojU){
    brojSedista = brojS;
    strana = s;
    brojUlaza = brojU;
    }
    Tribina(const Tribina & t){
    brojSedista = t.brojSedista;
    strana = t.strana;
    brojUlaza = t.brojUlaza;
    }

    int getBrojSedista()const{return brojSedista;}
    STRANA getStrana()const{return strana;}
    int getBrojUlaza()const{return brojUlaza;}

    void setBrojSedista(int b){brojSedista = b;}
    void setStrana(STRANA s){strana = s;}
    void setBrojUlaza(int b){brojUlaza = b;}


};


#endif // TRIBINA_H_INCLUDED
