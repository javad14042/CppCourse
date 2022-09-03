#include "subnet.h"

string subnet::getAddress() {
    return ip + "/" + to_string(mask);
}

subnet::subnet(string InIp) :ip{InIp}{

}

