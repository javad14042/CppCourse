#ifndef SHAPES_TRIANGLE_H
#define SHAPES_TRIANGLE_H
#include "shapes.h"

class triangle: public shapes{
public:
    double side1;
    double side2;
    double side3;

    triangle();
    triangle(double,double,double);
    ~triangle() override{};

     double getPerimeter() override;

};


#endif //SHAPES_TRIANGLE_H
