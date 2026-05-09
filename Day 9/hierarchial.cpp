#include <iostream>
using namespace std;
 // Hierarchical Inheritance

 class Human{
    //properties
    protected:
    string name;
    int age;
 };
 class Student1 : public Human{
    int rollNo;
    public:
    Student1(string n , int a ,int r){
        name = n;
        age = a;
        rollNo = r;
    }
    void display(){
        cout<<name<<endl<<age<<endl<<rollNo<<endl;
    }
 };
 class Student2 : public Human{
    int fees;
    public:

    Student2(string n,int a,int f){
        name = n;
        age = a;
        fees = f;
    }
    void display(){
        cout<<name<<endl<<age<<endl<<fees<<endl;
    }
 };
 int main(){
    Student2 obj("sanjana", 20, 5000);
    obj.display();
    return 0;
 }
