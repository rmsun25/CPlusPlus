#include <iostream>
#include <list>
#include <ctime>
#include <cmath>

using namespace std;
class Student
{
private:
    string name;
    int age;
    int gradelevel;
    double GPA;
    char gender;
    double grades[4];

public:
    Student(string n, int a, int g, char gen)
    {
        name = n;
        gradelevel = g;
        age = a;
        gender = gen;
    }

    void calcGPA()
    {
        GPA = (grades[0] + grades[1] + grades[2] + grades[3]) / 4;
    }

double getGPA()
{
    return GPA;
}
void setGrade(string course, double grade)
{
   // int courseIndex;
    if (course == "English")
    {
        grades[0] = grade;
    }
    else if (course == "Math")
    {
        grades[1] = grade;
    }
    else if (course == "Science")
    {
        grades[2] = grade;
    }
    else
    {
        grades[3] = grade;
    }
}
    void printGrade()
    {
        cout << "Name: " << name<< endl;
        cout << "English: " <<grades[0] << endl;
        cout << "Math: " <<grades[1] << endl;
        cout << "Science: " <<grades[2] << endl;
        cout << "Social Studies: " <<grades[3] << endl;
        cout <<"GPA: "<<GPA<<endl;
    }
};
int main()
{
    srand(time(NULL));

    Student std1("Anna", 16, 9, 'F');

    std1.setGrade("English", rand() % 100 + 1);
    std1.setGrade("Math", rand() % 100 + 1);
    std1.setGrade("Science", rand() % 100 + 1);
    std1.setGrade("Social Studies", rand() % 100 + 1);

    std1.calcGPA();
    std1.printGrade();

    Student std2("John", 15, 10, 'M');

    std2.setGrade("English", rand() % 100 + 1);
    std2.setGrade("Math", rand() % 100 + 1);
    std2.setGrade("Science", rand() % 100 + 1);
    std2.setGrade("Social Studies", rand() % 100 + 1);

    std2.calcGPA();
    std2.printGrade();

    double gpa1 = std1.getGPA();
    double gpa2 =std2.getGPA();

    if(gpa1 == gpa2){
        cout<<"They have the same GPA.";
    }
    else if(gpa1>gpa2){
    cout<<"Anna has a higher GPA by "<<(gpa1-gpa2)<<endl;
    }
    else if(gpa2>gpa1){
        cout<<"John has a higher GPA by "<<(gpa2-gpa1)<<endl;
    }



    return 0;
}