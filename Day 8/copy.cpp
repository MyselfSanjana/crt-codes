#include <iostream>
using namespace std;
 class Student{
    public:
    string name;
    int age;
    int rollNo;

    Student (string name , int age , int rollNo)
    {
        this-> name = name ;
        this ->age = age;
        this -> rollNo = rollNo;
    }
    Student(Student &a){   //agar actual parameter me (&)address hoga toh address of operator hoga. but formal parameter me hoga toh pass by reference hoga.
        name = a.name;
        age = a.age;
        rollNo = a.rollNo;
        cout<<name<<endl<<age<<endl<<rollNo<<endl;
    }
 };
 int main(){
    Student obj1("sanjana",20,01);
    Student obj2(obj1); //copy contructor 
    return 0 ;
 }
