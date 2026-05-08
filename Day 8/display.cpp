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
    void display(int age){
        int a = age;
        cout<<age<<endl;
    }
};


int main(){
    Student obj;
    obj.display(20);
}


