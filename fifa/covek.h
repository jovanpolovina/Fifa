#ifndef COVEK_H_INCLUDED
#define COVEK_H_INCLUDED
#include <string>

class Covek{
private:
std::string ime;
std::string prezime;

public:
Covek(){
ime = "Pera";
prezime = "Peric";
}

Covek(std::string i, std::string p){
ime = i;
prezime = p;
}

Covek(const Covek & c){
ime = c.ime;
prezime = c.prezime;
}

std::string getIme() const{return ime;}
std::string getPrezime() const {return prezime;}

void setIme(std::string i){ime = i;}
void setPrezime(std::string p){prezime = p;}


};


#endif // COVEK_H_INCLUDED
