#include "Triangle.h"

double Triangle::perimeter() {
    auto side = sides();
    double sumSides = 0;
    for (int i = 0; i < 3; ++i) {
        sumSides += side[i];
    }
    return sumSides;
}

double Triangle::area() {
    double p = perimeter() / 2;
    auto side = sides();
    double a2 = p;
    for (int i = 0; i < 3; ++i) {
        a2 *= (p - side[i]);
    }
    return sqrt(a2);
}

vector<double> Triangle::angles() {
    auto side = sides();
    auto a = side[0];
    auto b = side[1];
    auto c = side[2];
    vector<double> angle;
    angle.emplace_back(180/pi*acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b)));
    angle.emplace_back(180/pi*acos((pow(c, 2) + pow(b, 2) - pow(a, 2)) / (2 * c * b)));
    angle.emplace_back(180 - (angle[0] + angle[1]));
    return angle;
}

vector<double> Triangle::sides() {
    vector<double> tempSides;
//    double tempSides[3];  wrong -> return local variable address
    for (int i = 0; i < 3; ++i) {
        if (i != 2) // 0->1 , 1->2
            tempSides.emplace_back(points[i].distanceFromOtherPoint(points[i + 1]));
        else // 2->0
            tempSides.emplace_back(points[i].distanceFromOtherPoint(points[0]));
    }
    return tempSides;
}
