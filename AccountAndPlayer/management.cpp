#include <iostream>
#include <vector>
#include "account.h"
#include "management.h"


void management::ListOfAccounts() {
    for (int i = 0; i < customers.size(); i++) {
        cout << customers[i].getName() << endl;
        cout << "Id :" << customers[i].getId() << endl;
        cout << "Number :" << customers[i].getNumber() << endl;
        customers[i].DispalyBalance();
        cout << "\n";
    }
}

void management::search_name(string name) {
    for (int i = 0; i < customers.size(); i++) {
        if (customers[i].getName() == name) {
            customers[i].DispalyBalance();
            break;
        }
    }
}

void management::search_id(long int id) {
    for (int i = 0; i < customers.size(); i++) {
        if (customers[i].getId() == id) {
            cout << "Name :" << customers[i].getName() << endl;
            customers[i].DispalyBalance();
            break;
        }
    }
}

int management::returnIndexById(long int id) {
    for (int i = 0; i < customers.size(); i++)
        if (customers[i].getId() == id) return i;
    return -1;
}

void management::deposit(long id,long amount){
    customers.at(returnIndexById(id) ).deposit(amount,printFlag::no);
}

void management::addToVector(account tmp){
    if(tmp.getBalance() >= 0){
        customers.emplace_back(tmp);
    }
}
