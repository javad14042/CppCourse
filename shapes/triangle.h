#ifndef SHAPES_TRIANGLE_H
#define SHAPES_TRIANGLE_H
#include "regularPolygon.h"

class triangle: public regularPolygon{
public:
    triangle();
    triangle(double InLength);

    virtual double getArea();
};


#endif //SHAPES_TRIANGLE_H
