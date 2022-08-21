#include "customer.h"


bool customer::isIranian() {
    if (nationalCode.substr(0, 2) == "00") return true;
    return false;
}

void customer::SetName(string inName) {
    person::SetName(inName);
    balance += 50;
}
