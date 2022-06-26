#include "account.h"

using namespace std;
using std::string;

//account::account() : account("",0,0,0)  {
//}
//
//account::account(string InName) : account(InName,0,0,0) {
//}

account::account(string InName, long int Inid, long int Inphone_number, long int Inbalance)  //constructor
: name{InName}, id{Inid}, phone_number{Inphone_number}, balance{Inbalance} {
    cout << "a new account was generated" << endl;
}

void account::deposit(int x, printFlag flag) {
    balance += x;
    if (flag == printFlag::yes)
        account::DispalyBalance();
}

void account::withdraw(int y) {
    balance -= y;
    account::DispalyBalance();
}

void account::DispalyBalance() {
    cout << "Balance : " << balance << endl;
}

long int account::getBalance() {
    return balance;
}

string account::getName() {
    return name;
}


long int account::getNumber() {
    return phone_number;
}

long int account::getId() {
    return id;
}


