#ifndef SHAPES_CUSTOMER_H
#define SHAPES_CUSTOMER_H

#include "person.h"

//class drive : specific_access Base { };
class customer : public person{
public:
    double balance;

    void SetName(string);

    bool isIranian();

protected:

private:

};


#endif //SHAPES_CUSTOMER_H
