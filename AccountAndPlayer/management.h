#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include <iostream>
#include <vector>
#include "account.h"

using namespace std;

class management
{
public:
    vector<account> customers;

    void ListOfAccounts();
    void search_name(string);
    void search_id(long int id);

};

#endif // MANAGEMENT_H
