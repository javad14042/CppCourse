#include "regularPolygon.h"

regularPolygon::regularPolygon(int InSideNumber, double InSideLength)
:sideNumber{InSideNumber},sideLength{InSideLength}{
}

double regularPolygon::getPerimeter() {
    return sideLength*sideNumber;
}
