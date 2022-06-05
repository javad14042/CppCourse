#ifndef D1_ACCOUNTMANAGER_H
#define D1_ACCOUNTMANAGER_H

#include "account.h"

class accountManager {
    vector<account> accountList;

public:
    void addAccount(account inAccount);
};


#endif //D1_ACCOUNTMANAGER_H
