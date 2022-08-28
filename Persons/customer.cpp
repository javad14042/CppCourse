#include "customer.h"

customer::customer(): customer(0) {
}

customer::customer(double InBalance):balance{InBalance} {
    cout << "balance: " << &balance << endl;
}

customer::customer(double InBalance, string username, string password):
        account(username,password),balance{InBalance} {

}

//bool customer::isIranian() {
//    if (nationalCode.substr(0, 2) == "00") return true;
//    return false;
//}

//void customer::SetName(string inName) {
//    person::SetName(inName);
//    balance += 50;
//}

customer::customer(const customer &source): account(source), balance{source.balance} {
    cout << "copy constructor customer called" << endl;
}

customer &customer::operator=(const customer &rhs) {
    if(this == &rhs) return *this;
    account::operator=(rhs);
    balance = rhs.balance;
    cout << "copy assignment customer called" << endl;
    return *this;
}


