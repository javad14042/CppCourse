#ifndef ADDRESS_HOSTNAME_H
#define ADDRESS_HOSTNAME_H
#include "address.h"

class hostname :public address {
public:
    string ip;

     hostname(string InIp);
    virtual string getAddress();


};


#endif //ADDRESS_HOSTNAME_H
