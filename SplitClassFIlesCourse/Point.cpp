#include "Point.h"

double Point::distanceFromOtherPoint(Point otherPoint) const {
    double p12 = sqrt(pow((x - otherPoint.x), 2) + pow((y - otherPoint.y), 2));
    return p12;
}

double Point::get_x() {
    return x;
}

double Point::get_y() {
    return y;
}

void Point::setPoint(double inX, double inY) {
    x = inX;
    y = inY;
}

