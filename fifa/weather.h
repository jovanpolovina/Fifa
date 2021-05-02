#ifndef WEATHER_H_INCLUDED
#define WEATHER_H_INCLUDED

class Weather{

private:
int padavine;
int vetar;
int temperatura;
string opis;

public:
    Weather(){
    padavine = 0;
    vetar = 15;
    temperatura = 30;
    opis = "suncano";
    }

    Weather(int p, int v, int t, string o){
    padavine = p;
    vetar = v;
    temperatura = t;
    opis = o;
    }
    Weather(const Weather & w){
    padavine = w.padavine;
    vetar = w.vetar;
    temperatura = w.temperatura;
    opis = w.opis;
    }

    int getPadavine()const{return padavine;}
    int getVetar()const{return vetar;}
    int getTemperatura()const{return temperatura;}
    string getOpis()const{return opis;}

    void setPadavine(int p){padavine = p;}
    void setVetar(int v){vetar= v;}
    void setTemperatura(int t){temperatura = t;}
    void setOpis(string o){opis = o;}


};


#endif // WEATHER_H_INCLUDED
