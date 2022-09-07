#include "rightTriangle.h"
#include "cmath"

rightTriangle::rightTriangle(): rightTriangle(1,1,sqrt(2)) {

}

rightTriangle::rightTriangle(double InSide1, double InSide2,double InHypotenuse):side1=InSide1,
    triangle::triangle(side1,side2,sqrt(pow(side1,2) + pow(side2,2))){

}

void rightTriangle::rightTriangleBuilder(double InSide1, double InSide2) {
    rightTriangle(InSide1,InSide2,sqrt(pow(InSide1,2) + pow(InSide2,2)));
}

double rightTriangle::getArea() {
    return (side1*side2)/2;
}
