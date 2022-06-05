#ifndef D2_STUDENTMANAGER_H
#define D2_STUDENTMANAGER_H

#include <iostream>
#include <string>
#include "student.h"

using namespace std;

class studentManager {
public:
    //use data types
    int id;
    vector<int> ids;
    int rank;
    float location;
    string key;

    //use own data types
    vector<student> students;
    student namayende;
public:
    void printKeySize() {
        cout << key.size() << endl;
    }

    void printStudents() {
        for (int i = 0; i < students.size(); ++i) {
            cout << students[i].name << " : ";
            cout << students[i].math << " , ";
            cout << students[i].physics << " , ";
            cout << students[i].chemistry << " , ";
            cout << students[i].average << endl;
        }
    }

    void readInfo(string fileAddress);

};


#endif //D2_STUDENTMANAGER_H
