#ifndef ADDRESS_ADDRESS_MANAGER_H
#define ADDRESS_ADDRESS_MANAGER_H

#include <vector>
#include "address.h"

class address_manager {
private:
    vector<address*>listOfAddresses;

public:
    void displayData();
    void hostnameBuilder(string);
    void subnetBuilder(string,unsigned int);
protected:
    bool hostnameCheck(string);
    bool subnetCheck(string);
    bool IpCheck(string);
    bool MaskCheck(string);
    bool lengthCheck(string);


};


#endif //ADDRESS_ADDRESS_MANAGER_H
