#include "student.h"
#include <math.h>
#include <iostream>

using namespace std;

int student::count = 0;

student::student(string InName,double InMath,double InPhysics,double InChemistry)
: name{InName},math{InMath},physics{InPhysics},chemistry{InChemistry}
{
    count++;
    totalAverage = new int[5];
    totalAverage[0] = math;
    cout << "constructor calls : "  << this
    << " count of objects : " << count << " p : " << totalAverage << endl;
}

student::student(double InMath, double InPhysics, double InChemistry)
: student( "", InMath, InPhysics, InChemistry)
{

}

student::student(const student &source)
: name{source.name}, math{source.math}, physics{source.physics}, chemistry{source.chemistry}
{
    count++;
    totalAverage = new int[5];
    for (int i = 0; i < 5; ++i) {
        totalAverage[i] = source.totalAverage[i];
    }
    cout << "copy constructor calls from  " << &source << " to "  << this
    << " count of objects : " << count << " p : " << totalAverage << endl;
}

student::student(student &&source)
: name{source.name}, math{source.math}, physics{source.physics}, chemistry{source.chemistry}, totalAverage{source.totalAverage} {
    source.totalAverage = nullptr;
    cout << "move constructor calls from  " << &source << " to "  << this
         << " count of objects : " << count << " p : " << totalAverage << endl;
}

double student::calculateAverage()
{
    double sum = 0;
    sum += math;
    sum += physics;
    sum += chemistry;

    average = sum/3;
    return average;
}

void student::printScores() const{
    cout << name << " : ";
    cout << math << " , ";
    cout << physics << " , ";
    cout << chemistry << " , ";
    cout << average << endl;
}

student::~student() {
    count--;
    cout << "destructor calls : " << this << " count of objects : " << count << " p: "<< totalAverage << endl;
    delete [] totalAverage;
}


