#pragma once

#include <iostream>
#include <vector>

enum class transactionEnum{
    all,
    withdraw,
    deposit,
};

using std::string;
using std::vector;

class account
{


private:
    long int balance;
    string name;

public:
    vector<int> depositList;
    vector<int> withdrawList;
    int id;
    long int phone_number;

    account(string inName);
    account(string inName,int inId, long int inPhone);
    void setName(string inName);
    void displayName();
    void deposit(int x);
    int DispalyBalance();
    void withdraw(int y);

    void printTransaction(transactionEnum transaction);

};

