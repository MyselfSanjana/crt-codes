#include<iostream>
using namespace std;
// student class.
class Student{
    public:
    string name;
    int rollNo;
    int age;


    Student(int a, string s , int r ){  
        age=a;//parameterised contructor.
        name=s;
        rollNo=r;
        cout<<age<<endl<<name<<endl<<rollNo<<endl; 
    }

    void study(){
        cout<<name<<" is studying."<<endl;
    }
};
int main(){
    Student obj(20,"Sanjana",661); 
    
}