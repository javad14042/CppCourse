#ifndef SHAPES_CUSTOMER_H
#define SHAPES_CUSTOMER_H

#include "account.h"

//class drive : specific_access Base { };
class customer : public account{
public:
    double balance;

    customer();
    explicit customer(double InBalance);

    void SetName(string);
    bool isIranian();
};


#endif //SHAPES_CUSTOMER_H
