#include "combinedShape.h"

double combinedShape::totalArea() {
    double areaSum=0;
    for (auto & i : shapeList) {
        areaSum+=i->getArea();
    }
    return areaSum;
}
