#include "Punto.h"
#include<iostream>

Point::Point(){
    x=0;
    y=0;
}

Point::Point(Point &o){ //constructor copia
    x=o.x;
    y=o.y;
}

Point::Point(int xh, int yh){
    x=xh;
    y=yh;
}
void Point::offset(int nx,int ny){
    x += nx;
    y += ny;
}
void Point::print(){
    std::cout<<"("<<x<<","<<y<<")"<<std::endl;
}
double Point::getX(){
   return x;
}
double Point::getY(){
    return y;
}
void Point::setX(double x){
    this->x=x;
}
void Point::setY(double y){
    this->y=y;
}


