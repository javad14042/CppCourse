#include <iostream>
#include "triangle.h"
#include "square.h"
#include "regularPolygon.h"
#include <vector>
#include "circle.h"
//#include "shapes.h"

using namespace std;

void display(shapes& input){
    cout << "Area = "  << input.getArea();
    cout << ", Perimeter = "  << input.getPerimeter() << endl;
}

//void display(triangle input){
//    cout << "Area = "  << input.getArea() << endl;
//    cout << "Perimeter = "  << input.getPerimeter() << endl;
//}
//
//void display(square input){
//    cout << "Area = "  << input.getArea() << endl;
//    cout << "Perimeter = "  << input.getPerimeter() << endl;
//}


int main() {
/*
    //polymorphism -> same name but different behavior

    //static polymorphism (compile time)
    //overload function -> same name but different argument
    //redefine base class function -> same name but different argument

    //dynamic polymorphism (run time)
    //override base function

//    shapes *p1 = new shapes;
//    p1->getArea();
//
//    triangle *p2 = new triangle(2);
//    p2->getArea();
//
//    shapes *p3 = new triangle(2);
//    p3->getArea();
*/
//    triangle tr1(3);
//    display(tr1);
//    square sq1(2);
//    circle ci1(4);
//    display(sq1);
//    display(ci1);

    vector<shapes*> listShape;
    triangle tr1(2);
    triangle tr2(3);
    triangle tr3(4);

    listShape.emplace_back(&tr1);
    listShape.emplace_back(&tr2);
    listShape.emplace_back(&tr3);

    square sq1;
    square sq2(2);

    listShape.emplace_back(&sq1);
    listShape.emplace_back(&sq2);

    circle ci1;
    circle ci2(3);
    listShape.emplace_back(&ci1);
    listShape.emplace_back(&ci2);

    double sumArea{0};
    for (auto tr:listShape){
        display(*tr);
        sumArea += tr->getArea();
    }

    cout << "sum = " << sumArea << endl;

    return 0;
}
