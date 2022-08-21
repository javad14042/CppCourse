#include "info.h"

int main() {
    matrix sample1(2,2);
    cin>>sample1;
    cout<<sample1;

    matrix sample2(2, 2);
    matrix sample3(2, 2);
    sample2.GetElements();
    sample3.GetElements();
    sample3=sample2 + sample1;
    sample3.PrintfMatrix();
//    auto sample4 = 3*sample1;
    return 0;
}
