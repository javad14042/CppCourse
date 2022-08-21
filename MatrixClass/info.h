#ifndef INFO_H_INCLUDED
#define INFO_H_INCLUDED
#include <iostream>

using namespace std;

class matrix {
public:
     int rows;
     int columns;
    double **Dimensions;

    friend ostream & operator << (ostream &out, const matrix &c);
    friend istream & operator >> (istream &in,  matrix &c);

    explicit matrix(int rows = 2,int columns = 2);
    matrix(const matrix &source);
    matrix(matrix &&source);
    ~matrix();

    matrix &operator=(const matrix &rhs);
    matrix &operator=(matrix &&rhs);
    matrix operator+(const matrix &rhs);
    matrix operator*(const matrix &rhs);

    void GetElements();
    void PrintfMatrix();
    void multiplication_by_a_number(int Input);
    void multiplication_of_two_matrices(matrix a, matrix b);
    double determinantOfMatrix();
    matrix kahad(int i ,int j);
    double hamsaze(int i ,int j);
    matrix inverseMatrix();

};


#endif // INFO_H_INCLUDED
