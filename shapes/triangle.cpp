#include "triangle.h"

triangle::triangle(): triangle(1,1,1) {
}

triangle::triangle(double InSide1,double InSide2,double InSide3)
: side1{InSide1},side2{InSide2},side3{InSide3} {
}

double triangle::getPerimeter() {
    return side1+side2+side3;
}


