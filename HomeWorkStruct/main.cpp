#include <iostream>
#include <math.h>
#include <vector>

//#define pi 3.14159265359
double pi = 3.14159265359;

using namespace std;

class Point {
private:
    double x;
    double y;
//    double r;

public:
    double get_x();

    double get_y();

    double distanceFromOtherPoint(Point otherPoint) const;

//    void setPoint(double inX1, double inY1,
//                         double inX2, double inY2,
//                         double inX3, double inY3);
    void setPoint(double inX, double inY);
};

class Triangle {
public:
    Point points[3];

    vector<double> sides();

    double perimeter();

    double area();

    vector<double> angles();
};

class Rectangle {
public:
    Point points[2];

    double sideX();

    double sideY();

    double perimeter();

    double area();

};

class Exercise3 {
public:
    long long id;
    int bet1;
    int bet2;


};

int main() {
    Triangle myTriangle;
    myTriangle.points[0].setPoint(2,3);
    myTriangle.points[1].setPoint(4,7);
    myTriangle.points[2].setPoint(3,10);
    auto Asides = myTriangle.sides();

    for (int i = 0; i < 3; ++i) {
        cout << Asides[i] << endl;
    }

    cout << myTriangle.perimeter() << endl;
    cout << myTriangle.area() << endl;

    auto angle = myTriangle.angles();

    for (int i = 0; i < 3; ++i) {
        cout << angle[i] << endl;
    }
//    Point A;
//    A.setPoint(2,3);
//    Point B;
//    B.setPoint(5,7);
//    cout << A.distanceFromOtherPoint(B) << endl;
//    Point C;
//    C.setPoint(8,11);
//    cout << A.distanceFromOtherPoint(C) << endl;
    return 0;
}

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

double Rectangle::area() {
    return sideX() * sideY();
}

double Rectangle::sideX() {
    return abs(points[0].get_x() - points[1].get_x());
}

double Rectangle::sideY() {
    return abs(points[0].get_y() - points[1].get_y());
}

double Rectangle::perimeter() {
    return 2 * (sideY() + sideX());
}


double Point::distanceFromOtherPoint(Point otherPoint) const {
    double p12 = sqrt(pow((x - otherPoint.x), 2) + pow((y - otherPoint.y), 2));
    return p12;
}

double Point::get_x() {
    return x;
}

double Point::get_y() {
    return y;

}

void Point::setPoint(double inX, double inY) {
    x = inX;
    y = inY;
}



