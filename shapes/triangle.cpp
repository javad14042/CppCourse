#include "triangle.h"
#include "cmath"

triangle::triangle(): triangle(1){
}

triangle::triangle(double InLength) : regularPolygon(3, InLength) {
}

double triangle::getPerimeter() {
    return (0.4330*pow(sideLength,2));
}
