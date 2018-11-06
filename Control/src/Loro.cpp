#include "Loro.h"
#include "Animal.h"
#include <iostream>

Loro::Loro(string n_, int p_, int a_):Animal(n_,p_){

    alas=a_;
}
void Loro::habla(){
    cout<<"Es un loro "<<endl;
}

