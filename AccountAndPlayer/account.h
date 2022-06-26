#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <iostream>


using namespace std;

class account
{
private:
    long int balance=0;
    string name;
    long int id;
    long int phone_number;
public:
    void deposit(int x);
    void DispalyBalance();
    void withdraw(int y);

    long int getBalance();
    string getName();
    long int getNumber();
    long int getId();

    account(string InName,long int Inid,long int Inphone_number,long int Inbalance) //constructor
    {
        name=InName;
        id=Inid;
        phone_number=Inphone_number;
        balance=Inbalance;

    }
};




#endif // ACCOUNT_H_INCLUDED
