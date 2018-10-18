#include <iostream>
#include <stdlib.h>
#include <math.h>


using namespace std;
class Punto{
public:
    int x,y;
};

class Vector{
public:
    Punto inicio, fin;
};
void imprimir(const Vector *v){
    cout<<"("<< (*v).inicio.x<<"," << (*v).inicio.y << ") -> (" <<(*v).fin.x<<","<<(*v).fin.y<<")"<<endl;//podemos poner v ->
}
float modulo(Vector vec){
    return sqrt(pow((vec.fin.x)-(vec.inicio.x),2 )+ pow((vec.fin.x)-(vec.inicio.x),2));
}


int main()
{
    Vector vec; //vector de nombre vec
    vec.inicio.x= 4;
    vec.inicio.y= 5;
    vec.fin.x= 2;
    vec.fin.y= 6;
    //imprimir(vec);
    //cout<<modulo(vec);

    int n=4;
    Vector arr[n];
    for (int i=0;i<n; i++){
        arr[i].inicio.x = rand() %10;
        arr[i].inicio.y=  rand() %10 ;
}

    for(int i=0; i<n; i++){
        //cout<<modulo(arr[i])<<" ";

    }

    Vector *ptr=&vec;
    imprimir(ptr);
    return 0;
}
