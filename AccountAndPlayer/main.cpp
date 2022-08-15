#include <iostream>
#include "account.h"
#include "management.h"

using namespace std;


int main() {

    management branch1;
    //  branch1.readFile( "D:\\Programming\\CodeBlocks\\project\\filename.txt");
    account amir;
    amir.setUsername("amir");
    amir.setPass("123");
    amir.setName("amir");
    amir.setBalance(1000);
    branch1.addToVector(amir);

    account reza;
    reza.setUsername("reza");
    reza.setPass("123");
    reza.setName("reza");
    reza.setBalance(1000);
    branch1.addToVector(reza);

    string sop;


    while (true) {
        cout << "Enter l for login or s for sign up e for exit\n";
        cin >> sop;
        if (sop[0] == 'l' || sop[0] == 'L')
            branch1.LoginManager();
        else if (sop[0] == 's' || sop[0] == 'S')
            branch1.SignUpManager();
        else if (sop[0] == 'e' || sop[0] == 'E') {
            cout << "Goodbye\n";
            break;
        } else
            cout << "Wrong Input\n";
    }
    auto sum = myNumber1 + myNumber2;


    return 0;
}

