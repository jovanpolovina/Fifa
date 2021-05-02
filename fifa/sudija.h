#ifndef SUDIJA_H_INCLUDED
#define SUDIJA_H_INCLUDED
#include "covek.h"

enum TIP{glavni, linijski, cetvrti, VAR};
class Sudija:public Covek{
    private:
TIP tip;
string zemlja;
    public:
        Sudija():Covek(){
            tip = glavni;
            zemlja = "Srbija";
        }
        Sudija(string i, string p, TIP t, string z):Covek(i, p){
        tip = t;
        zemlja = z;
        }
        Sudija(const Sudija& s):Covek(s){
        tip = s.tip;
        zemlja = s.zemlja;
        }

        TIP getTip()const{return tip;}
        string getZemlja()const{return zemlja;}

        void setTip(TIP t){tip = t;}
        void setZemlja(string z){zemlja = z;}



};


#endif // SUDIJA_H_INCLUDED
