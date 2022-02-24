#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
  float w, h, bmi;
  cout << "Please Enter your weight in kg : ";
  cin >> w;
  cout << "Please Enter your Height in M : ";
  cin >> h;
  bmi = (w) / (h * h);
  cout << "Your BMI is : " << bmi << endl;
  if (bmi < 18.5)
    cout << "BMI Category: Underweight";
  if (bmi >= 18.5 && bmi <= 24.9)
    cout << "BMI Category: Normal";
  if (bmi >= 25 && bmi <= 29.9)
    cout << "BMI Category: Overweight";
  if (bmi > 30)
    cout << "BMI Category: Obese";
}
