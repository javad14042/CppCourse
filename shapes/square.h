#ifndef SHAPES_SQUARE_H
#define SHAPES_SQUARE_H

#include "regularPolygon.h"

class square : public regularPolygon {
public:
    square();
    square(double InLength);
    virtual ~square(){};

    double getArea() override;
};


#endif //SHAPES_SQUARE_H
