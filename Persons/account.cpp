#include "account.h"

account::account()
: account("", "") {

}

account::account(string InUsername, string InPassword)
: username{InUsername}, password{InPassword} {

}

void account::setPass(string InPassword) {
    password=InPassword;
}

void account::setUser(string InUsername) {
    username=InUsername;
}
