#ifndef SHAPES_CIRCLE_H
#define SHAPES_CIRCLE_H
#include "shapes.h"

class circle: public shapes{
public:
    double radius;

    circle();
    circle(double InRadius);

    virtual double getArea();
    virtual double getPerimeter();

};


#endif //SHAPES_CIRCLE_H
