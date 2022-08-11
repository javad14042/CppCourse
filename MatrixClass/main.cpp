#include <iostream>
#include "info.h"

using namespace std;

int main() {

    matrix sample1(3, 3);
    matrix sample2(3, 3);
    sample1.GetElements();
    cout << sample1.determinantOfMatrix();
    matrix copy1 = sample1;
    sample2 = sample1; // sample2.operator=(sample1); -> copy assignment
    sample2 = matrix(4,4); // sample2.operator=(sample1); -> move assignment
    matrix sample3;
    sample3 = sample1 + sample2; // sample3.operator=(sample1.operator+(sample2))
//    //matrix sample3 = sample1 + sample2  // sample3.copyConstructor(sample1.operator+(sample2))
//    matrix sample4 = 3 * sample3;
//    matrix sample5 = sample4++;
//    matrix sample6 = sample4 + 5;
//synatx
// type &type::operator=(const type& rhs)
    return 0;
}
