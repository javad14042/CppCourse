#ifndef ADDRESS_ADDRESS_MANAGER_H
#define ADDRESS_ADDRESS_MANAGER_H

#include <vector>
#include "address.h"

class address_manager {
protected:
    vector<address*>listOfAddresses;

    void displayData();
public:
    bool hostnameCheck(string);
    bool subnetCheck(string);
    bool IpCheck(string);
    bool MaskCheck(string);
    void hostnameBuilder();
    void subnetBuilder();

};


#endif //ADDRESS_ADDRESS_MANAGER_H
