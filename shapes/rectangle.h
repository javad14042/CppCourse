#ifndef SHAPES_RECTANGLE_H
#define SHAPES_RECTANGLE_H
#include "shapes.h"

class rectangle :public shapes{
public:
    double length;
    double width;

    rectangle();
    rectangle(double InLength, double InWidth);
    virtual ~rectangle(){};

    double getArea() override;
    double getPerimeter();
};


#endif //SHAPES_RECTANGLE_H
