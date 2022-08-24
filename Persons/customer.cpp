#include "customer.h"
#include <iostream>


bool customer::isIranian() {
    if (nationalCode.substr(0, 2) == "00") return true;
    return false;
}

void customer::SetName(string inName) {
    person::SetName(inName);
    balance += 50;
    protectedMemberPerson = 10;
}

void customer::printAddresses() {
    person::printAddresses();
    cout << "balance = " << &balance << endl;
    cout << "history = " << &history << endl;
}
