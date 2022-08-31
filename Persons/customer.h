#ifndef SHAPES_CUSTOMER_H
#define SHAPES_CUSTOMER_H

#include "account.h"

//class drive : specific_access Base { };
class customer : public account{
//    using account::account;
public:
    double balance;

    customer();
    explicit customer(double InBalance);
    customer(double InBalance,string username,string password);
    customer(const customer &);
    customer &operator=(const customer &);
    customer(customer &&);
    customer &operator=(customer &&);

    void SetName(string);
    bool isIranian();
};


#endif //SHAPES_CUSTOMER_H
