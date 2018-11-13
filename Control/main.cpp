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

    Animal arr[]={p,g,l};
    int size=sizeof(arr)/sizeof(arr[0]);
    //lista
    for(int i=0; i<size; i++){
        arr[i].habla();
    }
    ArrayAnimal pa2 (arr, size);
    //constructor copia
    ArrayAnimal p3=pa2;
    p3.push_back(p);
    p3.habla();
    //inserrt
    p3.insert(2,l);
    p3.habla();


    return 0;
}
