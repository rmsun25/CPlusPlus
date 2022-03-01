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
        double s;

        side1 = sqrt((tX2-tX1)*(tX2-tX1)+(tY2-tY1)*(tY2-tY1));
        side2 = sqrt((tX3-tX2)*(tX3-tX2)+(tY3-tY2)*(tY3-tY2));
        side3 = sqrt((tX3-tX1)*(tX3-tX1)+(tY3-tY1)*(tY3-tY1));
        s = (side1 + side2+ side3)/2;
        area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    }


};

int main()
{
Triangle A (0, 0, 1, 0, 0, 1);
cout<<"First point = ("<<A.x1<<", "<<A.y1<<")\n"; 
cout<<"Second point = ("<<A.x2<<", "<<A.y2<<")\n"; 
cout<<"Third point = ("<<A.x3<<", "<<A.y3<<")\n"; 
cout<<"Side 1 = "<<A.side1<<endl;
cout<<"Side 2 = "<<A.side2<<endl;
cout<<"Side 3 = "<<A.side3<<endl;
cout<<"Area = "<<A.area;
}
