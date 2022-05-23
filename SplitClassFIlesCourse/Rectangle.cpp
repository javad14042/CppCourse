#include "Rectangle.h"

double Rectangle::area() {
    return sideX() * sideY();
}

double Rectangle::sideX() {
    return abs(points[0].get_x() - points[1].get_x());
}

double Rectangle::sideY() {
    return abs(points[0].get_y() - points[1].get_y());
}

double Rectangle::perimeter() {
    return 2 * (sideY() + sideX());
}
