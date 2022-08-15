#include <iostream>
#include "info.h"

using namespace std;

int main()
{

matrix sample1(2,2);
sample1.GetElements();
cout<<"det:"<<sample1.determinantOfMatrix()<<endl;
cout<<"inv matrix:"<<endl;
sample1.inverseMatrix().PrintfMatrix();

    return 0;
}
