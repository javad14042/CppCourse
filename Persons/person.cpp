
#include "person.h"
#include <iostream>

string person::getName() {
    return name;
}

void person::SetName(string inName) {
    name = inName;
}

void person::printAddresses() {
    cout << "this = " << this << endl;
    cout << "name = " << &name << endl;
    cout << "nationalCode = " << &nationalCode << endl;
    cout << "protectedMemberPerson = " << &protectedMemberPerson << endl;
    cout << "privateMemberPerson = " << &privateMemberPerson << endl;
}
