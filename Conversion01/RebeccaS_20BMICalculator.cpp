#include<iostream>

using namespace std;
 
int main()
{
float w, h, bmi;
cout << "Please Enter your weight in kg : ";
    cin >> w;
cout << "Please Enter your Height in M : ";
    cin >> h;
bmi = (w)/(h*h);
cout << "Your BMI is : "<<bmi<<endl;