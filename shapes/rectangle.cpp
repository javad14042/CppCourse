#include "rectangle.h"

rectangle::rectangle() {
    length = 1;
    width = 1;
}

rectangle::rectangle(double InLength, double InWidth)
        :width{InWidth}, length{InLength} { }

double rectangle::getArea() {
    return length * width;
}

double rectangle::getPerimeter() {
    return 2 * (length + width);
}

