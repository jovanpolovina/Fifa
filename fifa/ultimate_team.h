#ifndef ULTIMATE_TEAM_H_INCLUDED
#define ULTIMATE_TEAM_H_INCLUDED
#include "list"
#include "account.h"
#include "klub.h"
#include "pack.h"

class UltimateTeam{
private:
List<Pack> packs;
Account account;
Klub klub;
float coins;
public:
    UltimateTeam():account(), klub(){
    packs = NULL;
    coins = 0;
    }
    UltimateTeam(List<Pack> p, const  Account & a, const Klub & k, float coins):account(a), klub(k){
    packs = p;
    coins = c;
    }
    UltimateTeam(const UltimateTeam & u):account(u.account), klub(u.klub){
    packs = u.packs;
    coins = u.coins;
    }

    List<Pack> getPacks()const{return packs;}
    Account getAccount()const{return account;}
    Klub getKlub()const{return klub;}
    float getCoins()const{return coins;}

    void setPacks(List<Pack> p){packs= p;}
    void setAccount(Account a){account = a;}
    void setKlub(Klub k){klub = k;}
    void setCoins(float c){coins = c;}


};




#endif // ULTIMATE_TEAM_H_INCLUDED
