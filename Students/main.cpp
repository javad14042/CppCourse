#include <iostream>
#include "studentManager.h"
#include "student.h"
#include <fstream>

class shallow {
public:
    int a;
//    vector<int> b;
    int *b;
    shallow(){
        a= 0;
//        b.resize(100);
        b = new int[100];
    }
};

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

/*    vector<int> vec1;
    vec1.reserve(100);
    vec1.emplace_back(1);
    vec1.emplace_back(2);
    cout << "size = " << vec1.size() << " and cap = " << vec1.capacity() << endl;
    vector<int> cvec = vec1;
    cout << "size = " << cvec.size() << " and cap = " << cvec.capacity() << endl;*/
/*    cout << sizeof(int) << endl;
    cout << sizeof(int*) << endl;
    int d = 0;
    int *c = new int[100];
    cout << sizeof(d) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(shallow) << endl;
    shallow obj1;

    obj1.b[0] = 100;
    cout << obj1.b[0] << endl;
    shallow obj2 = obj1;
    cout << obj2.b[0] << endl;
    obj2.b[0] = 200;

    cout << "after" << endl;
    cout << obj1.b[0] << endl;
    cout << obj2.b[0] << endl;*/
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
    class1.students.emplace_back(stuTmp2); // pass by value
    class1.students.emplace_back(stuTmp2); // pass by value
    getstudent(stuTmp2);
    student copiedStudent(stuTmp2);

//    auto  tmp3 = createstudent();
//    cout << "tmp3 : " << &tmp3 << endl;
//    string path="sample.txt";
//    studentManager class1(path);
//    class1.ReadFile();
//    class1.printStudents();
//    cout<<"\n\n\n\n";

/*    class1.ChangeScores("amir",subjects::physics,0);
    auto  tmp4 = createstudent(tmp3);
    cout << "tmp4 : " << &tmp4 << endl;
    cout << "Line : " << __LINE__ << endl;
    auto tmp5 = tmp4; // construct one object base on another object
    cout << "Line : " << __LINE__ << endl;
    cout << "tmp5 : " << &tmp5 << endl;
    cout << "class1.students[0] : " << &(class1.students[0]) << endl;
    cout << "class1.students[1] : " << &(class1.students[1]) << endl;
    cout << "students.capacity() : " << class1.students.capacity() << endl;*/
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

//    class1.ChangeScores("amir",subjects::physics,0);
//
 /*   class1.printStudents();
    class1.students.at(2).totalAverage[0] = 11;
    cout << endl;
    class1.printStudents();

*/



    return 0;
}