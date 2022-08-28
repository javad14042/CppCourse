#include <iostream>
#include "triangle.h"
#include "square.h"
#include "regularPolygon.h"
#include <vector>
//#include "shapes.h"

using namespace std;

int main() {

    vector<shapes> listShape;

    vector<triangle> listTr;
    triangle tr1(2);
    triangle tr2(3);
    triangle tr3(4);

    listShape.emplace_back(tr1);
    listShape.emplace_back(tr2);
    listShape.emplace_back(tr3);

    square sq1;
    square sq2;

    listShape.emplace_back(sq1);
    listShape.emplace_back(sq2);

    double sumArea{0};
    for (auto &tr:listShape){
        sumArea += tr.getArea();
    }

    cout << sumArea << endl;



    return 0;
}
