#include "ArrayAnimal.h"
#include "Animal.h"
#include <iostream>
using namespace std;


ArrayAnimal::ArrayAnimal()
{
    this-> size=0;
    this->arr=new ArrayAnimal[size];
}

ArrayAnimal::ArrayAnimal(const ArrayAnimal arrA[] ,const int size)
{
    this->size=size;
    this->arr=new ArrayAnimal[size];
    for(int i=0; i<size; i++)
        arr[i]=arrA[i];
}
ArrayAnimal::ArrayAnimal(ArrayAnimal &v){
    this->size=v.size;
    this->arr=new ArrayAnimal[v.size];
    for(int i=0;i< size; i++){
        arr[i]=v.arr[i];
    }
}

void ArrayAnimal::resize(int newSize){
    ArrayAnimal *arrA = new ArrayAnimal[newSize];
	int minsize = (newSize > size) ? size : newSize;
    for(int i = 0; i < minsize; i++)
        arrA[i] = arr[i];
	delete[] arr;
	size = newSize;
	arr = arrA;

}

ArrayAnimal::~ArrayAnimal(){
    delete arr;
}

void ArrayAnimal::insert(const int pos, const Animal &p) {
	resize(size+1);
    for(int i = size-1; i < pos; i--)
        arr[i] = arr[i-1];
    arr[pos]=p;
}

void ArrayAnimal::push_back(const Animal &p){
	resize(size+1);
	arr[size-1] = p;
}

void ArrayAnimal::remove(const int pos){
    if (pos<=size && pos>0){
        for(int i=pos-1; i<pos+1; i++)
            arr[i]= arr[i+1];
        resize(size-1);

    }

}

void ArrayAnimal::habla(){


}
