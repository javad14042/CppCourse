#include "account.h"

using namespace std;

void account::deposit(int x) {
    balance += x;
    depositList.emplace_back(x);
}

void account::withdraw(int y) {
    balance -= y;
    withdrawList.emplace_back(y);
}

int account::DispalyBalance() {
    cout << "Your Balance : " << balance << endl;
}

void account::setName(string inName) {
    name = inName;
}

void account::displayName() {
    if (name.length() < 20)
        cout << name << endl;
    else
        cout << name.substr(0,20) << endl;
}

void account::printTransaction(transactionEnum transaction) {
    switch (transaction) {

        case transactionEnum::all:
            cout << "\n\nwithdraw :";
            for (const int &i: withdrawList) {
                cout << i << "  ";
            }
            cout << "\n\nDeposit :";
            for (const int &i: depositList) {
                cout << i << "  ";
            }
            break;
        case transactionEnum::withdraw:
            cout << "\n\nwithdraw :";
            for (const int &i: withdrawList) {
                cout << i << "  ";
            }
            break;
        case transactionEnum::deposit:
            cout << "\n\nDeposit :";
            for (const int &i: depositList) {
                cout << i << "  ";
            }
            break;
    }

}

account::account(string inName) {
    account(inName,0,0);
}

account::account(string inName, int inId, long inPhone) {
    id = inId;
    phone_number = inPhone;
    balance = 1000;
}
