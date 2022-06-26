#include "account.h"

using namespace std;
using std::string;

void account::deposit(int x)
{
    balance+=x;
    account::DispalyBalance();
}

void account::withdraw(int y)
{
    balance-=y;
    account::DispalyBalance();
}

void account::DispalyBalance()
{
    cout<<"Balance : "<<balance<<endl;
}

long int account::getBalance()
{
    return balance;
}

string account::getName()
{
    return name;
}


long int account::getNumber()
{
    return phone_number;
}

long int account::getId()
{
    return id;
}
