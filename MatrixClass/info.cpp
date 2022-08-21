#include <iostream>
#include <cmath>
#include "info.h"

using namespace std;

matrix::matrix(const int Inrows, const int Incolumns)
: rows{Inrows}, columns{Incolumns} {
    Dimensions = new double *[rows];

    for (int i = 0; i < rows; i++)
        Dimensions[i] = new double[columns];
}

matrix::matrix(const matrix &source)
: rows{source.rows}, columns{source.columns} {

    Dimensions = new double *[rows];

    for (int i = 0; i < rows; i++)
        Dimensions[i] = new double[columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            Dimensions[i][j] = source.Dimensions[i][j];
        }
    }
}

matrix::matrix(matrix &&source)
: rows{source.rows}, columns{source.columns}, Dimensions{source.Dimensions} {
    source.Dimensions = nullptr;
}

matrix::~matrix() {
    if(Dimensions == nullptr) return;
    for (int i = 0; i < rows; i++) {
        delete[] Dimensions[i]; // Dimensions + i
    }
    delete[] Dimensions;
}

void matrix::GetElements() {
    cout << "Please enter elements for matrix :\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> Dimensions[i][j];
        }
    }
}

void matrix::PrintfMatrix() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << Dimensions[i][j] << " ";
        }
        cout << "\n";
    }
}

void matrix::multiplication_by_a_number(int Input) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            Dimensions[i][j] = Input * (Dimensions[i][j]);
        }
        cout << "\n";
    }
}

void matrix::multiplication_of_two_matrices(matrix a, matrix b) {
    int rslt[a.rows][b.columns];

    if (a.columns == b.rows) {

        for (int i = 0; i < a.rows; i++) {
            for (int j = 0; j < b.columns; j++) {
                rslt[i][j] = 0;

                for (int k = 0; k < b.rows; k++) {
                    rslt[i][j] += a.Dimensions[i][k] * b.Dimensions[k][j];
                }
                cout << rslt[i][j] << " ";
            }
            cout << endl;
        }
    } else
        cout << "You cannot multiply these two matrices\n";
}

double matrix::determinantOfMatrix() {
    if (rows == 2 && columns == 2)
        return (Dimensions[0][0] * Dimensions[1][1]) - (Dimensions[1][0] * Dimensions[0][1]);

    double det = 0;
    for (int i = 0; i < columns; ++i) {
        det += Dimensions[0][i] * hamsaze(0, i);
    }
    return det;
}

double matrix::hamsaze(int i, int j) {
    if (kahad(i, j).rows == 2) {
        return pow(-1, i + j) * ((kahad(i, j).Dimensions[0][0] * kahad(i, j).Dimensions[1][1]) -
                                 (kahad(i, j).Dimensions[0][1] * kahad(i, j).Dimensions[1][0]));
    }
    return pow(-1, i + j) * (kahad(i, j).determinantOfMatrix());
}

matrix matrix::kahad(int i, int j) {
    matrix tmp(rows - 1, columns - 1);

    for (int k = 0; k < rows; ++k) {
        for (int l = 0; l < columns; ++l) {

            if (k < i && l < j)
                tmp.Dimensions[k][l] = Dimensions[k][l];
            else if (k < i && l > j)
                tmp.Dimensions[k][l - 1] = Dimensions[k][l];
            else if (k > i && l > j)
                tmp.Dimensions[k - 1][l - 1] = Dimensions[k][l];
            else if (k > i && l < j)
                tmp.Dimensions[k - 1][l] = Dimensions[k][l];
        }
    }
    return tmp;
}

matrix matrix::inverseMatrix() {
    matrix temp(rows, columns);
    if (rows == 2 && columns == 2) {
        temp.Dimensions[0][0] = Dimensions[1][1];
        temp.Dimensions[1][1] = Dimensions[0][0];
        temp.Dimensions[0][1] = -1 * Dimensions[0][1];
        temp.Dimensions[1][0] = -1 * Dimensions[1][0];

        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < columns; ++j)
                temp.Dimensions[i][j] *= (1 / determinantOfMatrix());
        return temp;
    }

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < columns; ++j) {
            temp.Dimensions[j][i] = hamsaze(i, j);
            temp.Dimensions[j][i] *= (1 / determinantOfMatrix());
        }
    return temp;
}

matrix &matrix::operator=(const matrix &rhs) {

    for (int i = 0; i < rows; i++)
        delete[] Dimensions[i];
    delete[] Dimensions;        //delete

    rows = rhs.rows;            //assigning
    columns = rhs.columns;
    Dimensions = new double *[rows];

    for (int i = 0; i < rows; i++)
        Dimensions[i] = new double[columns];

    for (int i = 0; i < rows; i++) {            //new values
        for (int j = 0; j < columns; j++) {
            Dimensions[i][j] = rhs.Dimensions[i][j];
        }
    }
    return *this;
}

matrix &matrix::operator=(matrix &&rhs) {
//    for (int i = 0; i < rows; i++)
//        delete[] Dimensions[i];
//    delete[] Dimensions;        //delete
    Dimensions = rhs.Dimensions;
    rhs.Dimensions = nullptr;
    return *this;
}

matrix matrix::operator+(const matrix &rhs) {
    matrix answer(rows, columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            answer.Dimensions[i][j] = Dimensions[i][j] + rhs.Dimensions[i][j];
        }
    }
    return answer;
}

matrix matrix::operator*(const matrix &rhs) {
    matrix answer(rows, rhs.columns);

    if (columns == rhs.rows) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rhs.columns; j++) {
                answer.Dimensions[i][j] = 0;
                for (int k = 0; k < rhs.rows; k++) {
                    answer.Dimensions[i][j] += Dimensions[i][k] * rhs.Dimensions[k][j];
                }
            }
        }
        return answer;
    } else
        return matrix(2, 2);
}

ostream &operator<<(ostream &out, const matrix &c) {
    for (int i = 0; i < c.rows; i++) {
        for (int j = 0; j < c.columns; j++) {
            cout << c.Dimensions[i][j] << " ";
        }
        cout << "\n";
    }
    return out;
}

istream &operator>>(istream &in,  matrix &c) {
    cout << "Please enter elements for matrix :\n";

    for (int i = 0; i < c.rows; i++) {
        for (int j = 0; j < c.columns; j++) {
            in >> c.Dimensions[i][j];
        }
    }
    return in;
}



