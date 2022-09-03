#ifndef SHAPES_SQUARE_H
#define SHAPES_SQUARE_H

#include "regularPolygon.h"

class square : public regularPolygon {
public:
    square();
    square(double InLength);

    double getArea();
};


#endif //SHAPES_SQUARE_H
