#ifndef O4_TRIANGLE_H
#define O4_TRIANGLE_H


#include <vector>
#include "Point.h"

using namespace std;

double pi = 3.14159265359;

class Triangle {
public:
    Point points[3];

    vector<double> sides();

    double perimeter();

    double area();

    vector<double> angles();
};

#endif //O4_TRIANGLE_H
