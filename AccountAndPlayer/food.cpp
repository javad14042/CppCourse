#include "food.h"

food::food(account *obj)
        : name{obj} {
}

void food::order() {
    if (name->getBalance() >= 200) {
        name->withdraw(200);
        name->DisplayBalance();
        cout << "Your order is registered successfully" << endl;

    } else {
        cout << "you dont have enough credit to order food\n";
        cout << "Please charge your account\n";
    }
}