#include <iostream>
#include "info.h"

using namespace std;
matrix::matrix(const int Inrows,const int Incolumns)
    :rows{Inrows},columns{Incolumns}
{
    Dimensions=new int*[rows];

    for(int i=0; i<rows; i++)
    {
        Dimensions[i]=new int[columns];
    }
}
void matrix::GetElements()
{
    cout<<"Please enter elements for matrix :\n";

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cin>>Dimensions[i][j];
        }
    }
}
void matrix::PrintfMatrix()
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<Dimensions[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void matrix::multiplication_by_a_number(int Input)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            Dimensions[i][j]=Input*(Dimensions[i][j]);
        }
        cout<<"\n";
    }
}
void matrix::multiplication_of_two_matrices(matrix a,matrix b)
{
    int rslt[a.rows][b.columns];

    for (int i = 0; i < a.rows; i++)
    {
        for (int j = 0; j < b.columns; j++)
        {
            rslt[i][j] = 0;

            for (int k = 0; k < b.rows; k++)
            {
                rslt[i][j] += a.Dimensions[i][k] * b.Dimensions[k][j];
            }
            cout << rslt[i][j] << " ";
        }
        cout << endl;
    }
}
matrix::~matrix()
{
    for(int i=0; i<rows; i++)
    {
        delete[] Dimensions[i];
    }
    delete[] Dimensions;
}
