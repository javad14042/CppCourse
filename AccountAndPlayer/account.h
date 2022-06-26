#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <iostream>


using namespace std;

enum class printFlag{
    no,
    yes,
};

class account
{
private:
    long int balance=0;
    string name;
    long int id;
    const long int phone_number;
public:
    //1- > write no constructor -> c++ generate default constructor (no args constructor)
    //2- > write any constructor -> c++ no longer create default constructor
//    account();
//    explicit account(string InName);
    explicit account(string InName = "",long int Inid = 0,long int Inphone_number = 0,long int Inbalance = 0); //constructor

    void deposit(int x, printFlag flag = printFlag::yes);
    void DispalyBalance();
    void withdraw(int y);

    long int getBalance();
    string getName();
    long int getNumber();
    long int getId();

};




#endif // ACCOUNT_H_INCLUDED
