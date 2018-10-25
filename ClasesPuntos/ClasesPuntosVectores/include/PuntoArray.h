#ifndef PUNTOARRAY_H
#define PUNTOARRAY_H
#include "Punto.h"
#include "Vector.h"

class PuntoArray
{
    public:
        PuntoArray();
        PuntoArray(const Point ptr[], const int size);
        PuntoArray(PuntoArray &v);
       ~PuntoArray();
        int getSize();

    private:
        int size;
        Point *points;
};

#endif // PUNTOARRAY_H
