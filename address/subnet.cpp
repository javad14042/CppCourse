#include "subnet.h"

subnet::subnet(string InIp,unsigned int InMask) :ip{InIp},mask{InMask}{

}

string subnet::getAddress() {
    return ip + "/" + to_string(mask);
}

