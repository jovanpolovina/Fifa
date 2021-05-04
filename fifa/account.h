#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include "covek.h"

class Account:public Covek{
private:
    string email;
    string password;
    string username;
public:
    Account():Covek(){
    email = "polovina.jovan@jjzmaj.edu.rs";
    password = "ddsg";
    username = "jova04";
    }
    Account(string i, string p, string ps, string u, string e):Covek(i, p){
    email = e;
    password = ps;
    username = u;
    }
    Account(const Account & a):Covek(a){
    email = a.email;
    password = a.password;
    username = a.username;
    }

    string getEmail()const{return email;}
    string getPassword()const{return password;}
    string getUsername()const{return username;}

    void setEmail(string e){email = e;}
    void setPassword(string p){password = p;}
    void setUsername(string u){username = u;}
};



#endif // ACCOUNT_H_INCLUDED
