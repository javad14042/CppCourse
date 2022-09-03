#include "address_manager.h"
#include <cstring>
#include <iostream>
#include "hostname.h"
#include "subnet.h"

void address_manager::displayData() {
    for (int i = 1; i <= listOfAddresses.size(); ++i)
        cout << i << " " << listOfAddresses[i]->getAddress() << endl;
}

bool address_manager::hostnameCheck(string InHostname) {
    string tmp;
    tmp = InHostname;
    int counter = 0;
    int pos = 0;
    string str1 = "";
    while (true) {
        pos = tmp.find('.');
        str1 = tmp.substr(0, pos);
        if (!IpCheck(str1))
            return false;
        counter++;
        tmp = tmp.substr(pos + 1, tmp.back());
        if (counter == 4)
            return true;
    }
}

bool address_manager::subnetCheck(string InSubnet) {
    string tmp;
    tmp = InSubnet;
   int pos = tmp.find('/');
    string str1 = tmp.substr(pos+1, tmp.back());
    if(!MaskCheck(str1))
        return false;
    tmp = tmp.substr(0,pos);
    if(hostnameCheck(tmp))
        return true;
    return false;
}

bool address_manager::IpCheck(string input) {
    int tmp = stoi(input);
    if (tmp > 255 || tmp < 0)
        return false;
    return true;
}

bool address_manager::MaskCheck(string input) {
    int tmp = stoi(input);
    if (tmp >32 || tmp<0)
        return false;
    return true;
}

void address_manager::hostnameBuilder() {
    string input;
    while (true) {
        cout << "Enter ip\n";
        cin >> input;
        if (hostnameCheck(input)) {
            hostname tmp(input);
            listOfAddresses.emplace_back(&tmp);
            break;
        }
    }
}

void address_manager::subnetBuilder() {
    string input;
    while (true) {
        cout << "Enter ip\n";
        cin >> input;
        if (subnetCheck(input)) {
            subnet tmp(input);
            listOfAddresses.emplace_back(&tmp);
            break;
        }
    }
}
