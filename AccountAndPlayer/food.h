#ifndef PROJECT_FOOD_H
#define PROJECT_FOOD_H
#include "account.h"

class food {
public:
    account *name;

    explicit food(account *obj);

    void order();
};


#endif //PROJECT_FOOD_H
