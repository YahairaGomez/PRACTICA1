#include <iostream>
#include "Punto.h"
#include "Vector.h"
#include "PuntoArray.h"
using namespace std;
//las llamo y DEBO INCLUIR LA CLASE
void swapPoint(Point &x, Point &y){
    Point aux=x;
    x=y;
    y=aux;
}
void swapPointPunt(Point *x, Point *y){
    Point aux=*x;
    *x=*y;
    *y=aux;
}

int main()
{
   Point p(8,4);  //INSTANCIAS
   //p.print(); //IMPRIME 0
   Point q(6,7);
   //Point z=q; //CONSTRUCTOR COPIA
   //z.print();

   Point *ptr1=&p; //puntero que apunta a p
   Point *ptr2=&q;
   /*  (*ptr1).print();
   (*ptr2).print();
   swapPoint(p,q); //swap
   (*ptr1).print();
   (*ptr2).print();
   swapPointPunt(&p,&q);
   p.print();
   q.print();*/
//SEGUNDA PARTE
   /*Point *easy= new Point; //puntero
   easy->print(); //easy apuntando al metodo print del point que reservo, es lo mismo que (*easy).print()
   easy->offset(10,10);
   easy->print();

    Vector v(p,q);
    v.module();*/

    //TERCERA Parte
    Point r(1,9);
    Point x;
    Point arr[]={p,q,r,x};
    int size=sizeof(arr)/sizeof(arr[0]);
    PuntoArray pa(arr, size);
    PuntoArray pa2=pa;
    cout<< pa2.getSize()<<endl;



    return 0;
}
