#ifndef INFO_H_INCLUDED
#define INFO_H_INCLUDED

class matrix {
public:

    int rows;
    int columns;
    int **Dimensions;

    explicit matrix(int rows = 2, int columns = 2);
    matrix(const matrix &source);
    matrix(matrix &&source);
    //type &type::operator=(const type& rhs)
    matrix &operator=(const matrix& rhs);
    matrix &operator=(matrix&& rhs);
    ~matrix();

    void GetElements();
    void PrintfMatrix();
    void multiplication_by_a_number(int Input);
    void multiplication_of_two_matrices(matrix a, matrix b);
    int determinantOfMatrix();


};


#endif // INFO_H_INCLUDED
