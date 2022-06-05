
#include "accountManager.h"

void accountManager::addAccount(account inAccount) {
    accountList.emplace_back(inAccount);
}
