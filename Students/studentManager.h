#ifndef D2_STUDENTMANAGER_H
#define D2_STUDENTMANAGER_H

#include <iostream>
#include <fstream>
#include <string>
#include "student.h"

using namespace std;

enum class subjects
{
    math,
    physics,
    chemistry,

};

class studentManager
{
public:
    string FileAddress;
    vector<student> students;

    void printStudents();
    void ReadFile();
    explicit studentManager(string FileAddress="");
    void ChangeScores(string InName,subjects,double NewScore);
    int ReturnIndex(string InName);

};


#endif //D2_STUDENTMANAGER_H
