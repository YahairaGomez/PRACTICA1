#include "Perro.h"
#include "Animal.h"
#include <iostream>

using namespace std;
Perro::Perro(string n_, int p_, int a_):Animal(n_,p_){

    anho=a_;
}
void Perro::habla(){
    cout<<"Es un perro "<<endl;
}
