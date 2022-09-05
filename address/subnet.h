#ifndef ADDRESS_SUBNET_H
#define ADDRESS_SUBNET_H

#include "address.h"
#include <cstring>


class subnet : public address {
public:
    string ip;
    unsigned int mask;

    subnet(string InIp, unsigned int InMask);
    virtual ~subnet(){};

    string getAddress() override;
};


#endif //ADDRESS_SUBNET_H
