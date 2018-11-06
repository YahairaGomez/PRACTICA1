#ifndef PERRO_H
#define PERRO_H
#include "Animal.h"

#include <iostream>
class Perro: public Animal{
    protected:
        int anho;
    public:
        Perro(string, int, int);
        void habla();

};

#endif // PERRO_H
