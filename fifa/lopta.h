#ifndef LOPTA_H_INCLUDED
#define LOPTA_H_INCLUDED

enum MARKA{NIKE, ADIDAS, PUMA};
class Lopta{

private:
int velicina;
MARKA marka;
string boja;
public:
    Lopta(){
    velicina = 4;
    marka = ADIDAS;
    boja = "crvena";
    }
    Lopta(int v, MARKA m, string b){
    velicina = v;
    marka = m;
    boja = b;
    }
    Lopta(const Lopta & l){
    velicina = l.velicina;
    marka = l.marka;
    boja = l.boja;
    }

    int getVelicina()const{return velicina;}
    MARKA getMarka()const{return marka;}
    string getBoja()const{return boja;}

    void setVelicina(int v){velicina = v;}
    void setMarka(MARKA m){marka = m;}
    void setBoja(string b){boja = b;}
};

#endif // LOPTA_H_INCLUDED
