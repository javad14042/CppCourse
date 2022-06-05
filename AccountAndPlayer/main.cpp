#include <iostream>
#include "accountManager.h"
#include "account.h"
#include "player.h"


using namespace std;


void handle(account myAccount) {

    char op;
    while (1) {
        cin >> op;

        if (op == 'd' || op == 'D') {
            int x = 0;
            cout << "How much you want to deposit ?\n";
            cin >> x;
            myAccount.deposit(x);
            cout << endl;
        } else if (op == 'w' || op == 'W') {
            int x = 0;
            cout << "How much you want to withdraw ?\n";
            cin >> x;
            myAccount.withdraw(x);
            cout << endl;
        } else if (op == 'b' || op == 'B') {
            myAccount.DispalyBalance();
            cout << endl;
        } else if (op == 't' || op == 'T') {
            myAccount.printTransaction(transactionEnum::all);
            cout << endl << endl;
        } else if (op == 'e' || op == 'E') {
            break;
        } else {
            cout << "Invalid Input\n";
        }
    }
}

int main() {


    cout << "Please enter your name\n";
    char tmp[50];
    int id;
    long int phone;
    cin >> tmp;
    cout << "Please enter your id\n";
    cin >> id;
    cout << "Please enter your phone number\n";
    cin >> phone;
    cout << "Your registration has been completed!\n\n";

    account p1(tmp,id,phone);
    accountManager mySite;
    mySite.addAccount(p1);
    account p2("ali");
    mySite.addAccount(p2);
    cout << "Enter d for deposit\n"
            "w for withdraw\n"
            "b for displaying your balance\n"
            "t for previous transactions\n"
            "e for exit\n";

    handle(p1);


    return 0;
}


