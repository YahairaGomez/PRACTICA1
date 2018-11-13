#ifndef ARRAYANIMAL_H
#define ARRAYANIMAL_H
#include <iostream>
#include "Animal.h"
#include "Perro.h"
#include "Loro.h"
#include "Gato.h"
using namespace std;

class ArrayAnimal
{
    public:
        ArrayAnimal();
        ArrayAnimal(const ArrayAnimal arr[] ,const int );
        ArrayAnimal(ArrayAnimal &v);
        ~ArrayAnimal();
        void resize(int );
        void push_back(const Animal &p);
        void insert(const int pos, const Animal &p);
        void remove(const int pos);
    protected:
        ArrayAnimal *arr; //arreglo dinamico
        int size;
};


#endif // ARRAYANIMAL_H
