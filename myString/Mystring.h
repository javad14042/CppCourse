#ifndef STRING_MYSTRING_H
#define STRING_MYSTRING_H


class Mystring {

private:
    char *str;

public:
    Mystring();
    explicit Mystring(char *s,bool allocate = true);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();


    //return_type &operatorOP(type rhs)
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
    Mystring operator+(const Mystring &rhs); // +
    Mystring operator+(char *rhs); // +
    bool operator==(const Mystring &rhs); // ==


    void display() const;
    int get_length() const;
    char *get_str() const;


};


#endif //STRING_MYSTRING_H
