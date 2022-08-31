#ifndef ADDRESS_SUBNET_H
#define ADDRESS_SUBNET_H
#include "address.h"
#include <cstring>


class subnet :public address{
public:
    string ip;
    string mask;

    string getAddress();


};


#endif //ADDRESS_SUBNET_H
