#ifndef ADDRESS_ADDRESS_H
#define ADDRESS_ADDRESS_H
#include <iostream>

using namespace std;

class address {
public:
    string name;

    string getName();
    virtual string getAddress();

};


#endif //ADDRESS_ADDRESS_H
