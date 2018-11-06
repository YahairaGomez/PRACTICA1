#ifndef LORO_H
#define LORO_H
#include "Animal.h"
#include <iostream>


class Loro: public Animal{
     protected:

        int alas;
    public:
        Loro(string, int, int);
        void habla();

};
#endif // LORO_H
