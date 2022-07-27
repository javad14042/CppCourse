#include "taxi.h"

taxi::taxi(account *obj)
: name{obj} {
}

void taxi::order() {
    if (name->getBalance() >= 100) {
        name->withdraw(100);
        name->DisplayBalance();
        cout << "Your order is registered successfully" << endl;

    } else {
        cout << "you dont have enough credit to order a taxi\n";
        cout << "Please charge your account\n";
    }
}
