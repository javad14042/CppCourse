#include "circle.h"
#include "cmath"

circle::circle() { radius = 1; }


circle::circle(double InRadius)
        : radius{InRadius} {}

double circle::getArea() {
    return pi * pow(radius, 2);
}

double circle::getPerimeter() {
    return 2 * (pi * radius);
}

