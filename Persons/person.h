#include <string>

using namespace std;

#ifndef SHAPES_PERSON_H
#define SHAPES_PERSON_H


class person {
public:
    string name;
    string nationalCode;

    string getName();
    void SetName(string);
};


#endif //SHAPES_PERSON_H
