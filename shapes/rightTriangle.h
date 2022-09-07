#ifndef SHAPES_RIGHTTRIANGLE_H
#define SHAPES_RIGHTTRIANGLE_H
#include "triangle.h"

class rightTriangle :public triangle{
public:
    rightTriangle();
    ~rightTriangle() override{};

    void rightTriangleBuilder(double,double);
    double getArea() override;
    rightTriangle(double,double,double);

};

#endif //SHAPES_RIGHTTRIANGLE_H
