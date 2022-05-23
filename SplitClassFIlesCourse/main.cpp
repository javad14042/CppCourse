#include <iostream>
#include "Point.h" //.hpp
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int giveMyNumber(int myInput);

int main() {
    std::cout << giveMyNumber(5) << std::endl;
    std::cout << giveMyNumber(7) << std::endl;
    Point A,B;
    A.setPoint(3,4);
    B.setPoint(0,0);
    cout << A.distanceFromOtherPoint(B) << endl;
    return 0;
}

int giveMyNumber(int myInput){
    static int myNumber = 0;
    if(myNumber == 0){
        myNumber = myInput;
    }
    return myNumber;
}
