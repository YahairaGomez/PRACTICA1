#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal
{
    protected:
        string nombre;
        int nroPatas;
    public:
        Animal (string , int );
        virtual void habla()=0;
        void hacer_hablar(){
            this->habla();
        }

};









#endif // ANIMAL_H
