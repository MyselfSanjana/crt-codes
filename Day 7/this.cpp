#include<iostream>
using namespace std;
// student class.
class Student{
    public:
    string name;
    int rollNo;
    int age;

    Student(string name , int age , int rollNo  ){  
        (*this).age= age;
        (*this).name = name;
        (*this).rollNo = rollNo ;
        cout<<(*this).age<<" "<<(*this).name<<" "<<(*this).rollNo<<endl; 
    }


    void study(){
        cout<<name<<" is studying."<<endl;
    }
};
int main(){
    Student obj("Sanjana",20,661); 
}
