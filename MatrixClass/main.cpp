#include <iostream>
#include "info.h"

using namespace std;

int main() {

    matrix sample1(3, 3);
    sample1.GetElements();
    cout << sample1.determinantOfMatrix();

    return 0;
}
