#include "Vector.h"
#include "Punto.h"
#include <iostream>
#include <math.h>
#include "PuntoArray.h"
Vector::Vector(){
    Point start;
    Point end;
}
Vector::Vector(Vector &o)
{
    start=o.start;
    end=o.end;
}

void Vector::print()
{
    start.print();
    std::cout<<"->";
    end.print();
    std::cout<<std::endl;
}
void Vector::offset(int x, int y){
    start.offset(x,y);
    end.offset(x,y);
}
double Vector::module(){
    double x= (end.getX()-start.getX());
    double y= (end.getY()-start.getY());
    std::cout<<sqrt(x*x+y*y)<<std::endl;


}
Vector::Vector(Point s,Point f){
    start=s;
    end=f;
}
