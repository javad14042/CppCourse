#include <iostream>
#include <fstream>
#include <vector>
#include "account.h"
#include "management.h"

using namespace std;

int main()
{
    management series1;
    ifstream myfile("filename.txt");
    string tmp1;
    long int tmp2;
    long int tmp3;
    long int tmp4;

    if(!myfile.is_open()){
        cout << "file not found" << endl;
        return 1;
    }

    while(myfile >> tmp1 >> tmp2 >> tmp3 >> tmp4)
    {
//        account tmp;
        series1.customers.emplace_back(tmp1,tmp2,tmp3,tmp4);
    }
    myfile.close();
    int id  = 124;
    series1.search_id(id);
    series1.deposit(id,600);
    series1.search_id(id);

    account tmp;
    string name = "tmpName";
//    account tmp2(name);
//    account tmp3(name,30);
    series1.addToVector(account(name)); //explicit
//    series1.addToVector(name); //implicit




    return 0;
}


