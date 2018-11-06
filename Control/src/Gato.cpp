#include "Gato.h"
#include "Animal.h"
#include <iostream>
using namespace std;

Gato::Gato(string n_, int p_, int v_):Animal(n_,p_) {

    vidas=v_;
}
void Gato::habla(){
    void habla();
    std::cout<<"Gato "<<std::endl;
}
