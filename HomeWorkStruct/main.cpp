#include <iostream>
#include <math.h>

using namespace std;


int sides1_2    (int x1,int y1,int x2,int y2,int x3,int y3);
int sides1_3    (int x1,int y1,int x2,int y2,int x3,int y3);
int sides3_2    (int x1,int y1,int x2,int y2,int x3,int y3);

int area       (int x1,int y1,int x2,int y2,int x3,int y3);
int perimeter  (int x1,int y1,int x2,int y2,int x3,int y3);
int angles     (int x1,int y1,int x2,int y2,int x3,int y3);






struct Triangle
{
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;

    int sides1_2();
    int sides1_3 ();
    int sides3_2();
    int area();
    int perimeter();
    int angles();
};


struct Rectangle
{
    int x1;
    int y1;
    int x2;
    int y2;

};

struct Exercise3
{
    long long id;
    int bet1;
    int bet2;



};


int main()
{
    Triangle A{0,0,1,0,1,1};


    Exercise3 user1;
    cout<<"Please enter your id : \n";
    cin>>user1.id;
    cout<<"You can vote for 2 teams \nplace your bet : \n";







    return 0;
}


int sides1_2(int x1,int y1,int x2,int y2)
{
    double p12 = sqrt ( pow((x2-x1),2) + pow((y2-y1),2) );
    return p12;
}

int sides1_3(int x1,int y1,int x3,int y3)
{
    double p13 = sqrt ( pow((x3-x1),2) + pow((y3-y1),2) );
    return p13;
}

int sides3_2(int x2,int y2,int x3,int y3)
{
    double p32 = sqrt ( pow((x3-x2),2) + pow((y3-y2),2) );
    return p32;
}

int perimeter  (int x1,int y1,int x2,int y2,int x3,int y3)
{
    return sides3_2( x2, y2, x3, y3) +   sides1_3( x1, y1, x3, y3) +   sides1_2( x1, y1, x2, y2);
}

int area(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int p =  ( perimeter( x1, y1, x2, y2, x3, y3) )/2;
    return sqrt( p*(p-sides3_2( x2, y2, x3, y3))*(p-sides1_3( x1, y1, x3, y3) )*(p-sides1_2( x1, y1, x2, y2)));
}

int angles(int x1,int y1,int x2,int y2,int x3,int y3)
{
    double a = sides1_2( x1, y1, x2, y2);
    double b = sides1_3( x1, y1, x3, y3);
    double c = sides3_2( x2, y2, x3, y3);

    double C = acos( ( pow(a,2) + pow(b,2) - pow(c,2) )/(2*a*b) );
    double A = acos( ( pow(c,2) + pow(b,2) - pow(a,2) )/(2*c*b) );
    double B = 180 - (C + A);
}



