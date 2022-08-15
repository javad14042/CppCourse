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

    int *totalAverage;

    static int count;
   explicit student(string InName="",double InMath=0,double InPhysics=0,double InChemistry=0);
   // create an object from source object
   //student(const student &source) = delete;
   student(const student &source);
   student(student &&source);
    //implement 5 methods
    //student()
    //student(string name);
    //student(string name, double InMath);
    //student(string name, double InMath, double In3);
    //student(string name, double InMath, double In3, double in4);

    //not implement following method
    explicit student(double InMath, double InPhysics=0, double InChemistry=0);

    ~student();

    double calculateAverage();
    void printScores() const;
};


#endif //D2_STUDENT_H
