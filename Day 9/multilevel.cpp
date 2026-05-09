#include <iostream>
using namespace std;
 // Multilevel Inheritance

 class Human{
    //properties
    protected:
    string name;

 };
 class Person : public Human{
    protected:
    int age;
 };
 class Student : public Person{
    int rollNo;
    public:

    Student(string n , int r , int a){
        name = n;
        rollNo = r;
        age = a;
    }
    void display(){
        cout<<name<<endl<<rollNo<<endl<<age<<endl;
    }
 };
 int main(){
    Student obj("sanjana", 123, 20);
    obj.display();
    return 0;
 }
