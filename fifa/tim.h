#ifndef TIM_H_INCLUDED
#define TIM_H_INCLUDED
#include "list.hpp"
#include "Igrac.h"
#include "trener.h"
#include "dres.h"
#include "doktor.h"

class Tim{

private:
List<Igrac> igraci;
Dres dres;
Trener trener;
Doktor doktor;
public:
    Tim():trener(), dres(), doktor(){
    igraci.clear();
    }
    Tim(const Trener & t, const List<Igrac> & i, const Dres & d, const Doktor & dd):trener(t), dres(d), doktor(dd){
    igraci = i;
    }
    Tim(const Tim & t): trener(t.trener), dres(t.dres), doktor(t.doktor){
    igraci = t.igraci;
    }

    List<Igrac> getIgraci()const{return igraci;}
    Trener getTrener()const{return trener;}
    Dres getDres()const{return dres;}
    Doktor getDoktor()const{return doktor;}

    void setIgraci(const List<Igrac> & i){igraci =i;}
    void setTrener(const Trener & t){trener = t;}
    void setDres(const Dres & d){dres = d;}
    void setDoktor(const Doktor & d){doktor = d;}

};

#endif // TIM_H_INCLUDED
