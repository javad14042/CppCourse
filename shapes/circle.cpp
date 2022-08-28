#include "circle.h"
#include "cmath"

circle::circle(): circle(1) {
}

circle::circle(double InRadius)
        : radius{InRadius} {}

double circle::getArea() {
    return pi * pow(radius, 2);
}

double circle::getPerimeter() {
    return 2 * (pi * radius);
}

