#include <iostream>
#include "hostname.h"
#include "subnet.h"
#include "address_manager.h"
#include "string"

using namespace std;

int main() {

    address_manager add1;
    add1.subnetBuilder("12.13.14.15",11);
    add1.hostnameBuilder("12.13.14.15");

    add1.displayData();



    return 0;
}
