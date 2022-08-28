#include "square.h"
#include "cmath"

square::square() : square(1){
}

square::square(double InLength): regularPolygon(4,InLength) {
}

double square::getArea() {
    return pow(sideLength,2);
}
