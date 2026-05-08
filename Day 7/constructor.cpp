#include<iostream>
using namespace std;
// student class.
class Student{
    public:
    string name;
    int rollNo;
    int age;

    Student(){
        cout<<"default constructor called."<<endl;  //destructor
    }

    Student(int a ){  
        age=a;   //parameterised contructor.
        cout<<age<<endl; 
    }

//methods/behaviour.

    void study(){
        cout<<name<<" is studying."<<endl;
    }
};
int main(){
    Student obj(10); //object creation and constructor call.
    //dot opperator : access properties and methods of the class.
    obj.name = "Sanjana";
    obj.age = 20;
    obj.study();
}
