#ifndef _OOP_RECTANGLE_H_
#define _OOP_RECTANGLE_H_

class Rectangle {
public:
    Point points[2];

    double sideX();

    double sideY();

    double perimeter();

    double area();

};

#endif