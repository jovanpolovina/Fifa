#ifndef COVEK_H_INCLUDED
#define COVEK_H_INCLUDED

class Covek{
private:
string ime;
string prezime;

public:
Covek(){
ime = "Pera";
prezime = "Peric";
}

Covek(string i, string p){
ime = i;
prezime = p;
}

Covek(const Covek & c){
ime = c.ime;
prezime = c.prezime;
}

string getIme() const{return ime;}
string getPrezime() const {return prezime;}

void setIme(string i){ime = i;}
void setPrezime(string p){prezime = p;}


};


#endif // COVEK_H_INCLUDED
