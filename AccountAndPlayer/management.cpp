#include <iostream>
#include <vector>
#include <string.h>
#include "account.h"
#include "management.h"

void management::ListOfAccounts() {
    for (int i = 0; i < customers.size(); i++) {
        cout << customers[i].getName() << endl;
        cout << "Id :" << customers[i].getId() << endl;
        cout << "Phone Number :" << customers[i].getNumber() << endl;
        customers[i].DisplayBalance();
        cout << "\n";
    }
}

void management::search_name(string name) {
    for (int i = 0; i < customers.size(); i++) {
        if (customers[i].getName() == name) {
            customers[i].DisplayBalance();
            break;
        }
    }
}

void management::search_id(int id) {
    for (int i = 0; i < customers.size(); i++) {
        if (customers[i].getId() == id) {
            cout << "Name :" << customers[i].getName() << endl;
            customers[i].DisplayBalance();
            break;
        }
    }
}

int management::returnIndexById(int id) {
    for (int i = 0; i < customers.size(); i++)
        if (customers[i].getId() == id) return i;
    return -1;
}

void management::deposit(int id, long amount) {
    customers.at(returnIndexById(id)).deposit(amount, printFlag::no);
}

void management::addToVector(account tmp) {
    customers.emplace_back(tmp);
}

void management::SetVector(account tmp) {
    customers.emplace_back(tmp);
}

bool management::loginCheck(string user, string pass) {

    for (int i = 0; i < customers.size(); ++i) {
        if (customers[i].getUsername() == user) {
            if (customers[i].getPass() == pass) {
                cout << "Welcome " << customers[i].getName() << endl;
                return true;
            }
        }
    }
    cout << "Incorrect username or password\n";
}

bool management::SignUpCheck(string user) {
    for (int i = 0; i < customers.size(); ++i) {
        if (customers[i].getUsername() == user)
            return false;
    }
    return true;
}

bool management::PassCheck(string pass) {
    return (pass.length() >= 6);
}

int management::returnIndex(string username) {
    for (int i = 0; i < customers.size(); i++)
        if (customers[i].getUsername() == username)
            return i;
}

void management::deposit(int x, int index) {
    customers[index].deposit(x, printFlag::no);
}

void management::withdraw(int x, int index) {
    customers[index].withdraw(x);
}

void management::DisplayBalance(int index) {
    customers[index].DisplayBalance();
}

void management::readFile(string fileName) {
    ifstream file1;
    file1.open(fileName);
    string name;
    string username;
    string pass;
    long int balance;
    while (file1 >> name >> username >> pass >> balance) {
        account tmp;
        tmp.setName(name);
        tmp.setUsername(username);
        tmp.setPass(pass);
        tmp.setBalance(balance);
        customers.emplace_back(tmp);
    }
    file1.close();
}

account *management::searchUsername(string username) {
    for (int i = 0; i < customers.size(); ++i)
        if (customers[i].getUsername() == username)
            return &customers[i];
}

