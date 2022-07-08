#ifndef INFO_H_INCLUDED
#define INFO_H_INCLUDED

class matrix
{
public:

    const int rows;
    const int columns;
    int **Dimensions;

    explicit matrix(const int rows=2,const int columns=2);
    void GetElements();
    void PrintfMatrix();
    void multiplication_by_a_number(int Input);
    void multiplication_of_two_matrices(matrix a,matrix b);
   ~matrix();

};


#endif // INFO_H_INCLUDED
