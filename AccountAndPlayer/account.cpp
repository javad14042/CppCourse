#include "account.h"
#include "movie.h"
#include "food.h"
#include "taxi.h"
#include "onlineTv.h"

using namespace std;
using std::string;

//account::account() : account("",0,0,0)  {
//}
//
//account::account(string InName) : account(InName,0,0,0) {
//}

int account::idCounter = 1;

account::account(string InName, long int Inphone_number)
: name{InName}, phone_number{Inphone_number} {
    id = setId(idCounter);
    idCounter++;
}

account::~account() {
    delete myMovie;
    delete myFood;
    delete myTaxi;
}

void account::deposit(int x, printFlag flag)
{
    balance += x;
    if (flag == printFlag::yes)
        account::DisplayBalance();
}

void account::withdraw(int y)
{
    balance -= y;
}

void account::DisplayBalance() {
    cout << "Balance : " << balance << endl;
}

long int account::getBalance()
{
    return balance;
}

string account::getName()
{
    return name;
}

void account::setName(string InName) {
    name = InName;
}

long int account::getNumber()
{
    return phone_number;
}


int account::getId() {
    return id;
}

int account::setId(int InId) {
    id = InId;
    return InId;
}

string account::getUsername() {
    return username;
}

void account::setUsername(string InUsername) {
    username = InUsername;
}

string account::getPass() {
    return password;
}

void account::setPass(string InPass) {
    password = InPass;
}

void account::setBalance(long int InBalance) {
    balance = InBalance;
}

void account::foodCheck() {
    if (myFood == nullptr)
        myFood = new food(this);
}

void account::movieCheck() {
    if (myMovie == nullptr)
        myMovie = new onlineTv(this);
}

void account::taxiCheck() {
    if (myTaxi == nullptr)
        myTaxi = new taxi(this);
}
