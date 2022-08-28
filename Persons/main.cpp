#include <iostream>
#include "person.h"
#include "customer.h"
#include "admin.h"
#include "account.h"

int main() {
//    account ac1;
//    auto ac2 = ac1;
//    account ac3;
//    ac3 = ac2;
//
//    customer cu1;
//    auto cu2 = cu1;
//    customer cu3;
//    cu3 = cu2;

    account ac4;
    cout << &ac4 << endl;
    person *pe4 = &ac4;
    cout << &pe4 << endl;

    cout << "size account: " << sizeof(account) << endl;
    cout << "size person: " << sizeof(person) << endl;

    person *pe5;
//    account *ac5 = pe5;

    return 0;
}
