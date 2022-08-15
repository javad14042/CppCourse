#include <iostream>
#include <math.h>
#include "info.h"

using namespace std;

matrix::matrix(const int Inrows, const int Incolumns)
: rows{Inrows}, columns{Incolumns} {
    Dimensions = new int *[rows];

    for (int i = 0; i < rows; i++)
        Dimensions[i] = new int[columns];
}

matrix::matrix(const matrix &source)
:Dimensions{source.Dimensions},rows{source.rows}, columns{source.columns}
{

}

matrix::matrix(matrix &&source)
:rows{source.rows}, columns{source.columns},Dimensions{source.Dimensions}
{
    source.Dimensions= nullptr;
}

matrix &matrix::operator=(const matrix& rhs){
    for (int i = 0; i < rows; i++) {
        delete[] Dimensions[i];
    }
    delete[] Dimensions;

    rows = rhs.rows;
    columns = rhs.columns;
    Dimensions = new int *[rows];

    for (int i = 0; i < rows; i++)
        Dimensions[i] = new int[columns];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; ++j)
            Dimensions[i][j] = rhs.Dimensions[i][j];
}

matrix &matrix::operator=(matrix&& rhs){
    rows = rhs.rows;
    columns = rhs.columns;
    Dimensions = rhs.Dimensions;
    rhs.Dimensions = nullptr;
}

matrix::~matrix() {
    for (int i = 0; i < rows; i++) {
        delete[] Dimensions[i];
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

int matrix::determinantOfMatrix() {
    int d = 0;
    int submat[10][10];

    if (rows == 2)
        return ((Dimensions[0][0] * Dimensions[1][1]) - (Dimensions[1][0] * Dimensions[0][1]));
    else {
        for (int c = 0; c < rows; c++) {
            int subi = 0; //submatrix's i value
            for (int i = 1; i < rows; i++) {
                int subj = 0;
                for (int j = 0; j < rows; j++) {
                    if (j == c)
                        continue;
                    submat[subi][subj] = Dimensions[i][j];
                    subj++;
                }
                subi++;

            }
            d = d + (pow(-1, c) * Dimensions[0][c] * determinantOfMatrix());
        }
    }
    return d;
}


