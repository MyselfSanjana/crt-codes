#include<iostream>
using namespace std;
// student class.
class Student{
    public:
    string name;
    int rollNo;
    int age;
//methods/behaviour.
    void study(){
        cout<<name<<" is studying."<<endl;
    }
};
int main(){
    Student obj;
    //dot opperator : access properties and methods of the class.
    obj.name = "Sanjana";
    obj.age = 20;
    obj.study();
}
