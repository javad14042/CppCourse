#include "student.h"
#include <math.h>
#include <iostream>

using namespace std;

student::student(string InName,double InMath,double InPhysics,double InChemistry)
: name{InName},math{InMath},physics{InPhysics},chemistry{InChemistry}
{
    cout << "constructor calls : "  << this << endl;
}

student::student(double InMath, double InPhysics, double InChemistry)
: student( "", InMath, InPhysics, InChemistry)
{

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

student::~student() {
    cout << "destructor calls : " << this << endl;
}


