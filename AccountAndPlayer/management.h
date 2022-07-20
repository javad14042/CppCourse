#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include <iostream>
#include <fstream>
#include <vector>
#include "account.h"

using namespace std;

class management
{
private:
    vector<account> customers;
public:
    void ListOfAccounts();
    int returnIndex(string username);
    void deposit(int x,int index);
    void withdraw(int x,int index);
    void DisplayBalance(int index);
    void search_name(string);
    void search_id( int id);
    void readFile();

    int returnIndexById(int id);
    void deposit(int id, long amount);
    void addToVector(account tmp);
    void SetVector(account tmp);
    bool loginCheck(string user,string pass);
    bool SignUpCheck(string user);
    static bool PassCheck(string pass);
};

#endif // MANAGEMENT_H
