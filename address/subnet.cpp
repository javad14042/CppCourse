#include "subnet.h"

string subnet::getAddress() {
    return ip + "/" + to_string(mask);
}

