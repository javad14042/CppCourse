#include <string>
#include <iostream>
using namespace std;

#ifndef SHAPES_PERSON_H
#define SHAPES_PERSON_H


class person {
public:
    person(){ cout << "no-args constructor of person" << endl;}
    person(string name){ cout << "one-args constructor of person" << endl;}
    ~person(){ cout << "destructor of person" << endl;}


    string name;
    string nationalCode;

    string getName();
    void SetName(string);

    void printAddresses();

protected:
    int protectedMemberPerson;
private:
    int privateMemberPerson;
};


#endif //SHAPES_PERSON_H
