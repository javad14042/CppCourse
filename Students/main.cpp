#include <iostream>
#include "studentManager.h"
#include "student.h"
#include <fstream>

using namespace std;

void getstudent(student input){
    cout << "inside of functions1" << endl;
    input.calculateAverage();
    cout << "inside of functions2" << endl;
}

student createstudent(){
    student stuTmp("Amir",12,15,12);
    cout << "stuTmp : " << &stuTmp << endl;
    return stuTmp;
}

student createstudent(student &input){
    cout << "input : " << &input << endl;
    return input; // return an object
}

int main() {
    // copy constructor
    // pass by value
    // return a non-temporary object
    // construct one object base on another object

    // move constructor (when copy constructor & destructor calls at the same time)
    // pass by value a temporary object
    // return a temporary (local) object
    // construct one object base on temporary object



//    student stuTmp("Amir",12,15,12);
    student stuTmp2("Javad",10,16,14);
//    student stuTmp3 = student("Javad",10,16,14); // construct one object base on temporary object
    studentManager class1;
    class1.students.emplace_back("Amir",12,15,12);
    cout << "class1.students[0] : " << &(class1.students[0]) << endl;

    cout << "students.capacity() : " << class1.students.capacity() << endl;
    class1.students.emplace_back(stuTmp2); // pass by value
    getstudent(stuTmp2);

    auto  tmp3 = createstudent();
    cout << "tmp3 : " << &tmp3 << endl;

    auto  tmp4 = createstudent(tmp3);
    cout << "tmp4 : " << &tmp4 << endl;
    cout << "Line : " << __LINE__ << endl;
    auto tmp5 = tmp4; // construct one object base on another object
    cout << "Line : " << __LINE__ << endl;
    cout << "tmp5 : " << &tmp5 << endl;
    cout << "class1.students[0] : " << &(class1.students[0]) << endl;
    cout << "class1.students[1] : " << &(class1.students[1]) << endl;
    cout << "students.capacity() : " << class1.students.capacity() << endl;
/*    ifstream file1("sample.txt");
    char tmp1[100]{'\0'};
    double tmp2;
    double tmp3;
    double tmp4;
    while (file1 >> tmp1 >> tmp2 >> tmp3 >> tmp4) {
        student stuTmp;
        char tmpName[20];
        stuTmp.name = tmp1;
        stuTmp.math = tmp2;
        stuTmp.physics = tmp3;
        stuTmp.chemistry = tmp4;

        stuTmp.calculateAverage();
    }
    file1.close();
    cout << "end of reading scores" << endl;*/
    class1.printStudents();
    return 0;
}