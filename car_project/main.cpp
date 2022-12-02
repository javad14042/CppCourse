#include <iostream>
#include "aria100.h"
#include "Login_Manager.h"
#include "DB_Manager.h"

using namespace std;

int main() {
//    ariaCar *a = new aria100(10, 30);
//    // ariaCar *b = new aria200(10,30);
//
//    //aria100 a(10,30);
//    a->menu();

    Login_Manager manager;

    try {
        if (manager.dbManager == nullptr)
            throw 1;
        manager.callInsert();
    }
    catch (int num) {
        std::cout << "dbManager pointer is nullptr\n";
        std::cout << "You should assign it before using it\n";
    }

 return 0;
}
