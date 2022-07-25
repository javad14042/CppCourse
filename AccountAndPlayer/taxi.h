#ifndef PROJECT_TAXI_H
#define PROJECT_TAXI_H
#include "account.h"

class taxi {
public:
    account *name;

    explicit taxi(account &obj);

    void order();
};

#endif //PROJECT_TAXI_H
