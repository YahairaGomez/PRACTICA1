#include <iostream>
#include "Punto.h"
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
   Point p;  //INSTANCIAS
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

   Point *easy= new Point; //puntero
   easy->print(); //easy apuntando al metodo print del point que reservo, es lo mismo que (*easy).print()
   easy->offset(10,10);
   easy->print();
    return 0;
}
