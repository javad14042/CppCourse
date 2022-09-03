#include "hostname.h"

string hostname::getAddress() {
    return ip;
}

hostname::hostname(string InIp): ip{InIp}{

}
