#include <iostream>

using namespace std;
//&
//USOS:- sirve para extraer datos de memoria

//INTERCAMBIO USANDO VALORES  - PASO POR REFENCIA
 void swap_(int &a, int &b ){ // con &a y &b SI intercambia valores// PASO DE REFERENCIA //ESTA CAMBIANDO LETRA CON LETRA
        int temp=a;
        a=b;
        b=a;
    }

// INTERCAMBIO USANDO PUNTEROS : direccion de memoria //CAMBIANDO PUNTERO
void swapByPtr(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}


 //EJERCICIO 3: POTENCIA CON PUNTEROS

int pot(int *b, int *e){
       int res=1;
        for (int i=0; i<*e; i++){ //hasta el contenido de e
            res*= (*b);
        }
        return res;
    }

bool bisiesto(int *a){ //RECIBO UN CONTENIDO DE PUNTERO
    return (*a % 4 == 0 && (*a % 100 != 0) || (*a % 400 == 0));

}
bool primo(int *a){
    for(int i=2;i <*a  ; i++){
            if (!(*a%i))
                return false;
        }
        return true;
}




int main()
{
    //EJERCICIO 1
   //int x=5, y=10;
   //swap_(x,y); //con int a, int b NO intercambia ya que solo copia los valores



   //cout<< x <<endl;



   //swapByPtr(&x, &y);//no podemos colocar x ni y dentro de los parametos, ya que neesitamos direcion de memoria
   //cout<< x << endl; //no intercambio valores, solo INTERCAMBIAMOS APUNTADORES



    //EJERCICIO 2
    //int x=5;
    //int &y=x;
   //int *ptr=&x; //vamos a alterar el valor de x con punteros
   //y++; // x+1=6
   //x++; //x+1=7
   //*ptr+=30 ; // x=37
   //cout<<*ptr;



   //EJERCICIO 3
   //int a=12;
   //int b=2;
   //cout<<pot(&a;&2);//&= direccion de memoria // *= contenido

   //BISIESTO

    int a=7;
    //cout<<bisiesto(&a);
    cout<<primo(&a)<<endl;
    //PRIMO





    return 0;
}
