#include <iostream>
using namespace std;
 //single inheritence

 class Human{
    //properties
    protected:
    string name;

 };
 class Student : public Human{
    int rollNo;
    public:

    Student(string n , int a){
        name = n;
        rollNo = a;
    }
    void display(){
        cout<<name<<endl<<rollNo<<endl;
    }
 };
 int main(){
    Student obj("sanjana", 123);
    obj.display();
    return 0;
 }
