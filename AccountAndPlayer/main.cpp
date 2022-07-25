#include <iostream>
#include "account.h"
#include "management.h"
#include "taxi.h"
#include "food.h"

using namespace std;
void customersDashboard();

int main() {

    management branch1;
 //s   branch1.readFile( "D:\\Programming\\CodeBlocks\\project\\filename.txt");

    account amir;
    amir.setUsername("amir");
    amir.setPass("123");
    amir.setName("amir");
    amir.setBalance(250);
    branch1.addToVector(amir);

    account reza;
    reza.setUsername("reza");
    reza.setPass("321");
    reza.setName("reza");
    branch1.addToVector(reza);
    string sop;
    char op;
    string InUsername;
    string InPass;

    while (true) {
        cout << "Enter l for login or s for sign up e for exit\n";
        cin >> sop;
        op = sop[0];
        if (op == 'l' || op == 'L') {
            cout << "enter your username :\n";
            cin >> InUsername;
            cout << "enter your password :\n";
            cin >> InPass;
            if (branch1.loginCheck(InUsername, InPass)) {
                int index = branch1.returnIndex(InUsername);
                while (true) {
                    customersDashboard();
                    cin >> op;
                    if (op == 'd' || op == 'D') {
                        cout << "How much do you want to deposit?\n";
                        int input;
                        cin >> input;
                        branch1.deposit(input, index);
                    } else if (op == 'w' || op == 'W') {
                        cout << "How much do you want to withdraw?\n";
                        int input;
                        cin >> input;
                        branch1.withdraw(input, index);
                    }
                    else if(op=='t' || op=='T')
                    {
                        taxi tmp(amir);
                        tmp.order();
                    }
                    else if(op=='f' || op=='F')
                    {
                        food tmp(amir);
                        tmp.order();
                    }
                    else if (op == 'b' || op == 'B')
                        branch1.DisplayBalance(index);
                    else if (op == 'e' || op == 'E')
                        break;
                    else
                        cout << "Wrong Input\n";
                }
            }

        } else if (op == 's' || op == 'S') {
            string InName;
            long int PhoneNumber;
            cout << "Please enter your name\n";
            cin >> InName;
            cout << "Please enter your phone number\n";
            cin >> PhoneNumber;
            cout << "enter your username :\n";
            cin >> InUsername;
            while (!branch1.SignUpCheck(InUsername)) {
                cout << "Username already taken\n";
                cout << "Enter another username\n";
                cin >> InUsername;
            }
            cout << "enter your password :\n";
            cin >> InPass;
            while (!management::PassCheck(InPass)) {
                cout << "Your password is too short\n";
                cout << "Enter another password\n";
                cin >> InPass;
            }
            account tmp(InName, PhoneNumber);
            tmp.setUsername(InUsername);
            tmp.setPass(InPass);
            branch1.addToVector(tmp);
            cout << "Your account is registered successfully" << endl;
            cout << "You can login to your account" << endl;
        } else if (op == 'e' || op == 'E')
            break;
        else
            cout << "Wrong Input\n";
    }

    return 0;
}
void customersDashboard()
{
    cout << "Enter d for deposit\n"
            "      w for withdraw\n"
            "      b for displaying balance\n"
            "      t for taxi\n"
            "      f for food\n"
            "      e for exit\n";
}






