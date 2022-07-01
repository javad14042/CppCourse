#ifndef D2_STUDENTMANAGER_H
#define D2_STUDENTMANAGER_H

#include <iostream>
#include <string>
#include "student.h"

using namespace std;

class studentManager
{
public:
    int id;
    vector<int> ids;
    int rank;
    float location;

    vector<student> students;
public:
    void printStudents();

};


#endif //D2_STUDENTMANAGER_H
