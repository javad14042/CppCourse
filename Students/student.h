#ifndef D2_STUDENT_H
#define D2_STUDENT_H

#include <string>
#include <vector>

using namespace std;

class student {
public:
    string name;
    double math;
    double physics;
    double chemistry;
    double average;


   explicit student(string InName="",double InMath=0,double InPhysics=0,double InChemistry=0);

    double calculateAverage();

};


#endif //D2_STUDENT_H
