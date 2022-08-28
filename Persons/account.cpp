#include "account.h"

account::account()
        : account("", "") {

}

account::account(string InUsername, string InPassword)
        : username{InUsername}, password{InPassword} {
    cout << "username: " << &username << endl;
    cout << "password: " << &password << endl;

}

void account::setPass(string InPassword) {
    password = InPassword;
}

void account::setUser(string InUsername) {
    username = InUsername;
}

account::account(const account &source) :
        person(source),
        username{source.username},
        password{source.password} {
    cout << "copy constructor account called" << endl;
}

account &account::operator=(const account &rhs) {
    if (this != &rhs) {
        person::operator=(rhs);
        username = rhs.username;
        password = rhs.password;
    }
    cout << "copy assignment account called" << endl;
    return *this;
}
