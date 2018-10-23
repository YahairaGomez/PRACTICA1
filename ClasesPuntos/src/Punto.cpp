#include "Punto.h"
#include<iostream>

Point::Point(){
    x=0;
    y=0;
}

Point::Point(Point &o){
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
