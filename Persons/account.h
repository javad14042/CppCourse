#ifndef PERSONS_ACCOUNT_H
#define PERSONS_ACCOUNT_H

#include <iostream>
#include "person.h"

class account : public person {
private:
    string username;
    string password;
public:
    account();
    account(string InUsername, string InPassword);
    account(const account &source);
    account &operator=(const account &);
    void setPass(string InPassword);
    void setUser(string InUsername);



};


#endif //PERSONS_ACCOUNT_H
