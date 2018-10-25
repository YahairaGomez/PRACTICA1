#ifndef VECTOR_H
#define VECTOR_H
#include "Punto.h"


class Vector
{
    public:
        Point start;
        Point end;

        Vector();
        Vector(Point s,Point f);
        Vector(Vector &o);//vector copia




        void offset(int,int);
        void print();
        double module();

};

#endif // VECTOR_H
