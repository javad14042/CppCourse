#include <iostream>
#include "hostname.h"
#include "subnet.h"


//bool checkIp(const string& ip ){
//    return true;
//}

//hostname *createHostname(const string& ip) {
//    if(checkIp(ip)) auto out = new hostname(ip);
//    return nullptr;
//};

//void releaseHostname(hostname * host){
//    delete host;
//}


int main() {
//    if(checkIp("10.10.10.0")) hostname addr1(ip);
//    hostname *addr1 = createHostname("10.10.10.0");
//    if(addr1){
//
//    }
//    hostname addr1;
//    string inputIP;
//    do {
//        cin >> inputIP;
//    } while (!addr1.init(inputIP))

//    int *number = new int;
//    delete number;
//    hostname *addr3 = new hostname;
    hostname addr1;
    subnet addr2;
    addr1.ip = "10.10.10.0";
    addr2.ip = addr1.ip;
    addr2.mask = 24;

    cout << addr1.getAddress() << endl;
    cout << addr2.getAddress() << endl;
    cout << addr2.getAddress() << endl;
    return 0;
}
