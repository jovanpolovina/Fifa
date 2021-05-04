#include <iostream>
#include <string>
#include "list"
#include "mec.h"
#include "takmicenje.h"

using namespace std;

int main()
{
Trener("Josef", "Murinjo", 200, 1965, "Svi klubovi", ODBRAMBRENI);
Lopta(4, ADIDAS, "plava");
Sudija s("Milorad", "Mazic", glavni, "Srbija");
Tribina z(200, zapad, 4);
Tribina i(200, istok, 4);
Tribina ss(200, sever, 4);
Tribina j(200, jug, 4);
Tribina* tribine =(Tribina*) malloc(sizeof(class Tribina)*4);
    tribine[0] = z;
    tribine[1] = i;
    tribine[2] = j;
    tribine[3] = ss;

Stadion stadion("Camp Nou", 1965, tribine);
cout<<stadion.getTribine()[0].getBrojSedista();
    return 0;
}
