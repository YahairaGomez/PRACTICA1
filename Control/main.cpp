#include <iostream>
#include "Animal.h"
#include "Perro.h"
#include "Loro.h"
#include "Gato.h"
using namespace std;

int main()
{

    Perro p("Perro", 4, 10);
    p.habla();
    Gato g("Gato", 4, 10);
    g.habla();
    Loro l("Loro", 4, 10);
    l.habla();


//    void arr[4]={a,p,g,l};

    return 0;
}
