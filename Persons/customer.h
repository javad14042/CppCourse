#ifndef SHAPES_CUSTOMER_H
#define SHAPES_CUSTOMER_H

#include "person.h"
#include <vector>

//class drive : specific_access Base { };
class customer : public person{
public:
    customer() : person("") { cout << "no-args constructor of customer" << endl;}
    customer(string name) : person(name) { cout << "one-args constructor of customer" << endl;}
    ~customer(){ cout << "destructor of customer" << endl;}

    double balance;
    vector<string> history;

    void SetName(string);

    bool isIranian();

    void printAddresses();

protected:

private:

};


#endif //SHAPES_CUSTOMER_H
