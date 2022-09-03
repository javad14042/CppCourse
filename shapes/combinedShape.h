#ifndef SHAPES_COMBINEDSHAPE_H
#define SHAPES_COMBINEDSHAPE_H
#include <vector>
#include "shapes.h"

using namespace std;


class combinedShape {
public:
    vector<shapes*>shapeList;

    double totalArea();
};


#endif //SHAPES_COMBINEDSHAPE_H
