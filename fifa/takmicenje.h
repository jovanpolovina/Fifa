#ifndef TAKMICENJE_H_INCLUDED
#define TAKMICENJE_H_INCLUDED
#include "list"
#include "tabela.h"
#include "mec.h"

template<class T>
class Takmicenje{
private:
    List<Tabela<T>> tabele;
    List<Mec<T, T> > mecevi;
    string naziv;
public:
    Takmicenje(){
    tabele = NULL;
    mecevi = NULL;
    naziv = "";
    }
    Takmicenje(List<Tabela<T>> t, List<Mec<T,T>> m, string n){
    tabele = t;
    mecevi = m;
    naziv = n;
    }

    Takmicenje(const Takmicenje & t){
    tabele = t.tabele;
    mecevi = t.mecevi;
    naziv = t.naziv;
    }

    List<Tabela<T> > getTabele()const{return tabele;}
    List<Mec<T, T>> getMecevi()const{return mecevi;}
    string getNaziv()const{return naziv;}

    void setTabele(List<Tabela<T>> t){tabele = t;}
    void setMecevi(List<Mec<T,T>> m){mecevi = m;}
    void setNaziv(string n){naziv = n;}


};


#endif // TAKMICENJE_H_INCLUDED
