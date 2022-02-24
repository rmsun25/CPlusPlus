#include <iostream>
#include <list>
using namespace std;

class dog{
private: 
    int age;
    double weight; 
public:
    dog(int a, double w){
    age = a;
    weight = w;
    }
    int getage(){
        return age;
    }

    double getweight(){
        return weight;
    }
};

int main(){

dog pet (3, 2.5);
cout<<"The dog is " <<pet.getage() << "years old. Its weight is " << pet.getweight();


return 0;
}


