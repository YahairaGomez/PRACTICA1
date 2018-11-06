#ifndef GATO_H
#define GATO_H
#include "Animal.h"
#include <iostream>
using namespace std;

class Gato: public Animal{
    protected:
        int vidas;
    public:
        Gato(string, int, int);
        void habla();

};

#endif // GATO_H
