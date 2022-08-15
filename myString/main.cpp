#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring str1;
    str1.display();
    cout << endl;

    Mystring str2("hi");
    str2.display();
    cout << endl;

//    Mystring str3(str2);
    Mystring str3 = str2;
    str3.display();
    cout << endl;

    Mystring str4;
    str4 = str3;
    str4.display();
    cout << endl;

    Mystring str5;
    str5 = Mystring("hello");
    str5.display();
    cout << endl;


    cout << "compare str2,3 = " << (str2 == str3) << endl;
    str2.get_str()[0] = 'A';
    cout << "str2 = ";
    str2.display();
    cout << endl;
    cout << "str3 = ";
    str3.display();
    cout << endl;
    cout << "compare str2,3 = " << (str2 == str3) << endl;

    Mystring str6 {" world"};
    Mystring str7 = str5 + str6;
    str7.display();
    cout << endl;

    Mystring str8 = str7 + " !";
    str8.display();
    cout << endl;

    //cout << str8;
    //cin >> str8;


    return 0;
}
