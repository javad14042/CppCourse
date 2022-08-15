#ifndef PROJECT_ONLINETV_H
#define PROJECT_ONLINETV_H

#include <iostream>
#include "account.h"
#include "movies.h"
#include <vector>

using namespace std;

class onlineTv {
public:
    account *AccountName;

    explicit onlineTv(account *obj);

    vector<int>watchedMovies;
    void order(movies sample);
    bool search(int id);
    bool searchExistence(int id,movies sample);
};


#endif //PROJECT_ONLINETV_H
