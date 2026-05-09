#include <iostream>
using namespace std;
 // Multiple Inheritance

 class Human{
    //properties
    protected:
    string name;

 };
 class Person{
    protected:
    int age;
 };
 class Student : public Human, public Person{
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
