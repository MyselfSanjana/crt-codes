//abstraction and Encapsulation ka yehi same code hoga.

#include <iostream>
using namespace std;

//Encapsulation/Abstraction
class Student{
    public:
    //properties
    string name;
    int age;
    int rollNo;

    public:
    void setter(string n,int a,int r){
        name=n;
        age=a;
        rollNo=r;
    }
    int getter()
{
    return age;
}
};

int main(){
    Student obj;
    obj.setter("Sanjana",20,01);
    cout<<obj.getter();
}


