#ifndef _OOP_POINT_H_
#define _OOP_POINT_H_

#include <math.h>

class Point {
private:
    double x;
    double y;
//    double r;

public:
    double get_x();

    double get_y();

    double distanceFromOtherPoint(Point otherPoint) const;

    void setPoint(double inX, double inY);
};

#endif