#include <iostream>
#include <list>
#include <cmath>
using namespace std;
class Triangle{
public:
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    double side1;
    double side2;
    double side3;
    double area;

    Triangle(int tX1, int tY1, int tX2,int tY2, int tX3, int tY3){
        x1 =tX1;
        y1 = tY1;
        x2 = tX2;
        y2 = tY2;
        x3 = tX3;
        y3 = tY3;

        side1 = sqrt((tX2-tX1)*(tX2-tX1)+(tY2-tY1)*(tY2-tY1));
        //side2 = ;
        //side3 = ;
        //area =;
    }


};

int main()
{

}