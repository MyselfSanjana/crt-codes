#include <iostream>
using namespace std;

//fn overriding
class Human{
    public:
    void display(){

    }
};
class Person : public Human{
    public: 
    void display(){

    }
};
int main(){
    Human *obj;
    obj = new Person();
    obj->display();
}