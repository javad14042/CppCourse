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

    void calculateAverage(){
        double sum = 0;
        sum += math;
        sum += physics;
        sum += chemistry;

        average = sum/3;
    }
};


#endif //D2_STUDENT_H
