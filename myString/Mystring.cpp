#include <iostream>
#include "Mystring.h"
#include <cstring>

using namespace std;

Mystring::Mystring() {
    str = new char[1];
    str[0] = '\0';
}

Mystring::Mystring(char *s, bool allocate) {
    if (allocate) {
        str = new char[strlen(s + 1)];
        strcpy(str, s);
    } else {
        str = s;
    }
}

Mystring::Mystring(const Mystring &source) {
    str = new char[source.get_length() + 1];
    strcpy(str, source.get_str());
}

Mystring::Mystring(Mystring &&source)
        : str{source.str} {
    source.str = nullptr;
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

char *Mystring::get_str() const {
    return str;
}

//type &type::operator
Mystring &Mystring::operator=(const Mystring &rhs) {
    delete[]str;
    str = new char[rhs.get_length() + 1];
    strcpy(str, rhs.str);
}

Mystring &Mystring::operator=(Mystring &&rhs) {
    str = rhs.str;
    rhs.str = nullptr;
}

Mystring Mystring::operator+(const Mystring &rhs) {
    //ans = this + rhs
    char *ans = new char[get_length() + rhs.get_length() + 1];
    strcpy(ans, str);
    strcat(ans, rhs.str);

    return Mystring{ans, false};
}

Mystring Mystring::operator+(char *rhs) {
    Mystring Myrhs = Mystring(rhs);
    return *this + Myrhs;
}

bool Mystring::operator==(const Mystring &rhs) {
    return (strcmp(str,rhs.str) == 0);
}

