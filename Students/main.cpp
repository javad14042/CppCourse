#include <iostream>
#include "studentManager.h"
#include "student.h"
#include <fstream>

using namespace std;

int main() {

    /* name/courses -> math, physics, chemistry, average
     * name1 , 20, 19, 18, 19
     * name2 , ...
     * name3 ...
     * */
    studentManager studentClass1;
    studentClass1.readInfo("D:\\streams\\scores.txt");
    /*ifstream file1;
    char tmp1[100]{'\0'};
    double tmp2;
    double tmp3;
    double tmp4;
    file1.open("D:\\streams\\scores.txt");
    while (file1 >> tmp1 >> tmp2 >> tmp3 >> tmp4) {
        student stuTmp;
        char tmpName[20];
        stuTmp.name = tmp1;
        stuTmp.math = tmp2;
        stuTmp.physics = tmp3;
        stuTmp.chemistry = tmp4;

        stuTmp.calculateAverage();

        studentClass1.students.emplace_back(stuTmp);
    }
    file1.close();
    cout << "end of reading scores" << endl;*/

    studentClass1.printStudents();
//    vector<student> studentClass1;


    return 0;
}
