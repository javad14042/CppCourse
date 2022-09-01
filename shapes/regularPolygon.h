#ifndef SHAPES_REGULARPOLYGON_H
#define SHAPES_REGULARPOLYGON_H
#include "shapes.h"

class regularPolygon: public shapes{
public:
    int sideNumber;
    double sideLength;

    regularPolygon(int InSideNumber,double InSideLength);

    virtual double getPerimeter();
    virtual double getArea();
};


#endif //SHAPES_REGULARPOLYGON_H
