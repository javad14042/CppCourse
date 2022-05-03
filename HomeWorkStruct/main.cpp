#include <iostream>
#include <math.h>

using namespace std;

class Point {
private:
    double x;
    double y;
//    double r;

public:
    double get_x();
    void set_x(double inX);

    double distanceFromOtherPoint(Point otherPoint) const;

    void setPoint(double inX, double inY);

};

struct Triangle {

    Point points[3];

    double *sides();

    double perimeter();

    double area();

    double angles();
};

struct Rectangle {
    Point points[2];

    double sideX();

    double sideY();

    double perimeter();

    double area();

};

struct Exercise3 {
    long long id;
    int bet1;
    int bet2;


};

int main() {
    Triangle myTriangle{0, 0, 2, 0, 2, 1};
    double *Asides = myTriangle.sides();

    for (int i = 0; i < 3; ++i) {
        cout << Asides + i << endl;
        cout << Asides[i] << endl; // *(Asides + i)
    }

    delete[] Asides;
    //angles[0] -> side[0]
    cout << myTriangle.perimeter() << endl;
    cout << myTriangle.area() << endl;

    return 0;
}

double Triangle::perimeter() {
    auto *side = sides();
    double sumSides = 0;
    for (int i = 0; i < 3; ++i) {
        sumSides += side[i];
    }
    delete[] side;
    return sumSides;
}

double Triangle::area() {
    double p = perimeter() / 2;
    auto *side = sides();
    double a2 = p;
    for (int i = 0; i < 3; ++i) {
        a2 *= (p - side[i]);
    }
    delete[] side;
    return sqrt(a2);
}

//double Triangle::angles() {
//    double a = sides1_2(x1, y1, x2, y2);
//    double b = sides1_3(x1, y1, x3, y3);
//    double c = sides3_2(x2, y2, x3, y3);
//
//    double C = acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b));
//    double A = acos((pow(c, 2) + pow(b, 2) - pow(a, 2)) / (2 * c * b));
//    double B = 180 - (C + A);
//}

double *Triangle::sides() {
    auto *tempSides = new double(3);
//    double tempSides[3];  wrong -> return local variable address
    for (int i = 0; i < 3; ++i) {
        if (i != 2)
            tempSides[i] = points[i].distanceFromOtherPoint(points[i + 1]);
        else
            tempSides[i] = points[i].distanceFromOtherPoint(points[0]);
    }
    return tempSides;
}

double Rectangle::area() {
    return sideX() * sideY();
}

double Rectangle::sideX() {
    return abs(points[0].x - points[1].x);
}

double Rectangle::sideY() {
    return abs(points[0].y - points[1].y);
}

double Rectangle::perimeter() {
    return 2 * (sideY() + sideX());
}

double Point::distanceFromOtherPoint(Point otherPoint) const {
    double p12 = sqrt(pow((x - otherPoint.x), 2) + pow((y - otherPoint.y), 2));
    return p12;
}

void Point::setPoint(double inX, double inY) {
    if (inX < 20 && inY < 20) {
        x = inX;
        y = inY;
//        r = sqrt(x * x + y * y);
    }
}

double Point::get_x() {
    return x;
}

void Point::set_x(double inX) {
    if(inX < 20)
        x = inX;
}
