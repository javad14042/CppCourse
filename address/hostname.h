#ifndef ADDRESS_HOSTNAME_H
#define ADDRESS_HOSTNAME_H
#include "address.h"

class hostname :public address {
public:
    string ip;

    string getAddress();


};


#endif //ADDRESS_HOSTNAME_H
