#include "address_manager.h"
#include <cstring>
#include <iostream>
#include "hostname.h"
#include "subnet.h"

void address_manager::displayData() {
    cout<<"----------------------------\n";
    for (int i = 0; i < listOfAddresses.size(); ++i)
        cout << i + 1 << ")   " << listOfAddresses[i]->getAddress() << endl;
    cout<<"----------------------------\n";

}

bool address_manager::hostnameCheck(string InHostname) {
    string tmp;
    tmp = InHostname;
    int counter = 0;
    int pos = 0;
    string str1 = "";
    if(!lengthCheck(tmp))
        return false;

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
    string str1 = tmp.substr(pos + 1, tmp.back());

    if (!MaskCheck(str1))
        return false;
    tmp = tmp.substr(0, pos);
    if (hostnameCheck(tmp))
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
    if (tmp > 32 || tmp < 0)
        return false;
    return true;
}

void address_manager::hostnameBuilder(string input) {
    while (true) {
        if (hostnameCheck(input)) {
            auto tmp = new hostname(input);
            listOfAddresses.emplace_back(tmp);
            break;
        }
    }
}

void address_manager::subnetBuilder(string input, unsigned int mask) {
    while (true) {
        if (subnetCheck(input)) {
            auto tmp = new subnet(input, mask);
            listOfAddresses.emplace_back(tmp);
            break;
        }
    }
}

bool address_manager::lengthCheck(string input) {
    int counter = 0;

    for (int i=0;i<input.length();i++) {
        if (input[i] == '.' && isdigit(input[i + 1]) )
            counter++;
    }
    if (counter == 3)
        return true;
    return false;
}
