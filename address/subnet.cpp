#include "subnet.h"

string subnet::getAddress() {
    ip.push_back('/');
    ip.append(mask);
    return ip;
}

