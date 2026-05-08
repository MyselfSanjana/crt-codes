#include<iostream>
using namespace std;
// student class.
class Student{
    public:
    string name;
    int rollNo;
    int age;

    Student(int a ){  
        age=a;   //parameterised contructor.
        cout<<age<<endl; 
    } //contructor 1
    Student(int a, string s , int r ){  
        age=a;
        name=s;
        rollNo=r;
        cout<<age<<endl<<name<<endl<<rollNo<<endl;  //constructor 2 (jab 2 constructor hai toh overloading hogi).
    }

    void study(){
        cout<<name<<" is studying."<<endl;
    }
};
int main(){
    Student obj(20,"Sanjana",661); 
    
}