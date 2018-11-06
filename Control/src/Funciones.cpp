#include "Funciones.h"
#include "Animal.h"
#include "Perro.h"
#include "Loro.h"
#include "Gato.h"
#include <iostream>
using namespace std;

Funciones::Funciones()
{
    cout<<"ANIMALES"<<endl;
}


Funciones::Funciones(int c_){
    cantidad= c_;
}
/*void Funciones::resize(int newSize){
    Animal *pts=Animal p[];
    minSize= newSize>size? size:newSize;
    for (int i=0; i<newSize; i++){
        *pts[i]=p[i];

    }
    minSize=newSize;
    p[]=pts[];
}
void Funciones::final(int posicion){
    resize(size+1);
    arr[size-1]=posicion;
}

*/

