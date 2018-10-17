#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;
class Punto
{
    public:
       int x,y ;

};

void imprimir(Punto arr[], int tam) {
for (int i=0; i< tam; i++){
    cout<<"("<<arr[i].x<<"," <<arr[i].y<<")"<<" ";
}
}
bool creciente(int c1, int c2){
    return c1>  c2;
}

bool decreciente(int c1, int c2){
    return c1<  c2;
}

void ordenar(Punto arr[], int tam, bool(*criterio)(int, int)){
for (int i=0; i<tam; i++){
            for(int j=0; j<tam; j++){
                if ((*criterio)(arr[j].x, arr[i].x)){
                    Punto aux=arr[i];
                    arr[i]=arr[j];
                    arr[j]=aux;
                }
            }


    }
}

////// Ordenar nombres
class Alumno
{
    public:
       char* name;
       int ID;

};


int main()
{   /*Punto p;
    p.x=5;
    p.y=4;
    cout<<"("<<p.x<<"," <<p.y<<")"<<endl;*/

    int n=10;
    Punto arr[n];
    for (int i=0;i<n; i++){
        arr[i].x = rand() %100;
        arr[i].y=  rand() %100 ;;
       // cout<<"("<<arr[i].x<<"," <<arr[i].y<<")"<<" ";


    }
    cout<<endl;
    //ordenar
    ordenar(arr,n,decreciente);
    imprimir(arr,n);

    Alumno student1;
    student1. name= "Valeria";
    student1. ID=12131;

    Alumno student12;
    student2. name= "Yahaira";
    student2. ID=121365;

    Alumno student1;
    student3. name= "Sebas";
    student3. ID=121315987;

    int n=convertir(student1.name);
    int m=convertir(student2.name);





    return 0;
}
