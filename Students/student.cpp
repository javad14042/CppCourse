#include "student.h"
#include <math.h>

using namespace std;

student::student(string InName,double InMath,double InPhysics,double InChemistry)
: name{InName},math{InMath},physics{InPhysics},chemistry{InChemistry}
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
