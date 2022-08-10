#include <iostream>
#include "account.h"
#include "management.h"
#include "taxi.h"
#include "food.h"
#include "onlineTv.h"


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
    return false;
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
    return -1;
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
    return nullptr;
}

void management::LoginManager() {

    movies tmp2;
    tmp2.readFile("D:\\Programming\\CodeBlocks\\project\\filename.txt");
    string InUsername;
    string InPass;
    cout << "Enter your username :\n";
    cin >> InUsername;
    cout << "Enter your password :\n";
    cin >> InPass;
    if (this->loginCheck(InUsername, InPass)) {
        int index = this->returnIndex(InUsername);
        while (true) {
            customersDashboard();
            string sop;
            cin >> sop[0];
            if (sop[0] == 'd' || sop[0] == 'D') {
                cout << "How much do you want to deposit?\n";
                int input;
                cin >> input;
                this->deposit(input, index);
            } else if (sop[0] == 'w' || sop[0] == 'W') {
                cout << "How much do you want to withdraw?\n";
                int input;
                cin >> input;
                this->withdraw(input, index);
            } else if (sop[0] == 't' || sop[0] == 'T') {
                searchUsername(InUsername)->taxiCheck();
                searchUsername(InUsername)->myTaxi->order();

            } else if (sop[0] == 'f' || sop[0] == 'F') {
                searchUsername(InUsername)->foodCheck();
                searchUsername(InUsername)->myFood->order();
            } else if (sop[0] == 'm' || sop[0] == 'M') {
                searchUsername(InUsername)->movieCheck();
                tmp2.displayMovies();
                searchUsername(InUsername)->myMovie->order(tmp2);
            } else if (sop[0] == 'b' || sop[0] == 'B')
                DisplayBalance(index);
            else if (sop[0] == 'e' || sop[0] == 'E') {
                break;
            } else
                cout << "Wrong Input\n";
        }
    }
}

void management::SignUpManager() {
    string InPass;
    string InUsername;
    string InName;
    long int PhoneNumber;
    cout << "Please enter your name\n";
    cin >> InName;
    cout << "Please enter your phone number\n";
    cin >> PhoneNumber;
    cout << "Enter your username :\n";
    cin >> InUsername;
    while (!this->SignUpCheck(InUsername)) {
        cout << "Username already taken\n";
        cout << "Enter another username\n";
        cin >> InUsername;
    }
    cout << "Enter your password :\n";
    cin >> InPass;
    while (!management::PassCheck(InPass)) {
        cout << "Your password is too short\n";
        cout << "Enter another password\n";
        cin >> InPass;
    }
    account tmp(InName, PhoneNumber);
    tmp.setUsername(InUsername);
    tmp.setPass(InPass);
    this->addToVector(tmp);
    cout << "Your account is registered successfully" << endl;
    cout << "You can login into your account" << endl;

}

void management::customersDashboard() {
    cout << "Enter d for deposit\n"
            "      w for withdraw\n"
            "      b for displaying balance\n"
            "      t for taxi\n"
            "      f for food\n"
            "      m for movie\n"
            "      e for exit\n";
}
