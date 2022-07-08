#include <iostream>
#include "info.h"

using namespace std;

int main()
{

    matrix sample1(3,3);
    sample1.GetElements();
    sample1.PrintfMatrix();
    sample1.multiplication_by_a_number(2);
    matrix sample2(3,3);
    sample2.multiplication_of_two_matrices(sample1,sample2);


    return 0;
}
