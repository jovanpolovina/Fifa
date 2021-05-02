#ifndef TIM_H_INCLUDED
#define TIM_H_INCLUDED
#include "list"
#include "Igrac.h"
#include "trener.h"


class Tim{

private:
List<Igrac> igraci;
Trener trener;
public:
    Tim():trener(){
    igraci = NULL;
    }
    Tim(const Trener & t, const List<Igrac> & i){
    igraci = i;
    trener = t;
    }
    Tim(const Tim & t){
    igraci = t.igraci;
    trener = t.trener;
    }

    List<Igrac> getIgraci()const{return igraci;}
    Trener getTrener()const{return trener;}

    void setIgraci(const List<Igrac> & i){igraci =i;}
    void setTrener(const Trener & t){trener = t;}

};

#endif // TIM_H_INCLUDED
