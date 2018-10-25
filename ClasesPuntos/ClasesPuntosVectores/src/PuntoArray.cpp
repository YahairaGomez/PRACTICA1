#include "PuntoArray.h"
#include "Punto.h"
#include "Vector.h"

PuntoArray::PuntoArray()
{
    this->size=0;
    this->points= new Point[size];
}

PuntoArray::PuntoArray(const Point ptr[], const int size)
{
    this->size=size;
    this->points= new Point[size];
    for(int i=0;i< size; i++){
        points[i]=ptr[i];
    }
}
PuntoArray::~PuntoArray(){
    delete[] points;
}

PuntoArray::PuntoArray(PuntoArray &v){
    this->size=v.size;
    this->points=new Point[v.size];
    for(int i=0;i< size; i++){
        points[i]=v.points[i];
    }
}
int PuntoArray::getSize(){
    return this->size;
}
