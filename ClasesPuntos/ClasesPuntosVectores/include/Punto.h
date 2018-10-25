#ifndef PUNTO_H
#define PUNTO_H



class Point
{
    public:
        Point();
        Point(Point &o);
        Point(int, int);
        void offset(int,int);
        void print();
        double getX();
        double getY();
        void setX(double x); //permite modificar atributos privados x e y
        void setY(double y);

    private:
        double x,y;
};


#endif // PUNTO_H
