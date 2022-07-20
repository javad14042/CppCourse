#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <iostream>

using namespace std;

enum class printFlag
{
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
    string username=" ";
    string password;
public:
    //constructor
    explicit account(string InName = "",long int Inphone_number = 0);
    //functions
    void deposit(int x, printFlag flag = printFlag::yes);
    void DisplayBalance();
    void withdraw(int y);
    //getters an setters
    void setBalance(long int InBalance);
    long int getBalance();
    string getName();
    void setName(string InName);
    long int getNumber();
    int getId();
    int setId(int InId);
    string getUsername();
    void setUsername(string InUsername);
    string getPass();
    void setPass(string InPass);

};

#endif // ACCOUNT_H_INCLUDED
