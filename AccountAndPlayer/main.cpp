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

    while(myfile >> tmp1 >> tmp2 >> tmp3 >> tmp4)
    {
        account tmp(tmp1,tmp2,tmp3,tmp4);
        series1.customers.emplace_back(tmp);
    }

    series1.ListOfAccounts();
    myfile.close();







    //   char op;
//    account p1={"amir",123,456};
//    vector <int> prevTransaction;
//
////    cout<<"Please enter your name\n";
////    cin>>p1.name;
////    cout<<"Please enter your id\n";
////    cin>>p1.id;
////    cout<<"Please enter your phone number\n";
////    cin>>p1.phone_number;
////    cout<<"Your registration has been completed!\n\n";
//
//    cout<<"Enter d for deposit\nw for withdraw\nb for displaying your balance\nt for previous transactions\ne for exit\n";
//    while(1)
//    {
//        cin>>op;
//
//        if(op=='d' || op=='D')
//        {
//            int x=0;
//            cout<<"How much you want to deposit ?\n";
//            cin>>x;
//            p1.deposit(x);
//            prevTransaction.emplace_back(x);
//            cout<<endl;
//        }
//
//        else if(op=='w' || op=='W')
//        {
//            int x=0;
//            cout<<"How much you want to withdraw ?\n";
//            cin>>x;
//            p1.withdraw(x);
//            prevTransaction.emplace_back(-1*x);
//            cout<<endl;
//
//        }
//
//        else if(op=='b' || op=='B')
//        {
//            p1.DispalyBalance();
//            cout<<endl;
//        }
//
//
//        else if(op=='t' || op=='T')
//        {
//            cout<<"Previous Transactions :";
//            for (const int& i : prevTransaction)
//            {
//                cout << i << "  ";
//            }
//            cout<<endl<<endl;
//       }
//
//        else if(op=='e'|| op=='E')
//        {
//            break;
//        }
//
//        else
//        {
//            cout<<"Invalid Input\n";
//        }
//
//    }



    return 0;
}


