#include <iostream>
#include "Mystring.h"
#include <cstring>

using namespace std;

Mystring::Mystring() {
str=" ";
}

Mystring::Mystring(const char *s) {
    str = new char[strlen(s)];
    strcpy(str, s);
}

Mystring::Mystring(const Mystring &source)
        : str{source.str} {
}

Mystring::~Mystring() {
    delete[]str;
}

void Mystring::display() const {
    cout << str;
}

int Mystring::get_length() const {
    return strlen(str);
}

const char *Mystring::get_str() const {
    return str;
}

Mystring &Mystring::operator=(const Mystring &rhs) {
    delete[]str;
    str = new char[rhs.get_length()];
    strcpy(str, rhs.str);
}

Mystring &Mystring::operator=(Mystring &&rhs) {
    str = new char[rhs.get_length()];
    strcpy(str, rhs.str);
    rhs.str = nullptr;
    //================================
    //    str=rhs.str;
    //    rhs.str = nullptr;

}

