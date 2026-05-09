#include <iostream>
using namespace std;
//polymorphism.
// compile time polymorphism 

class Complex{
    int real;
    int img;
    public:
    // constructor
    Complex(int real , int imag){
        this->real = real;
        this->img = imag;
    }

    // operator overloading
    Complex operator + (Complex &c){
        Complex ans(0,0); // (0,0) is the defaul constructor.
        ans.real = real + c.real;  //real is c1 and c.real is c2.
        ans.img = img + c.img;   // img is c1 and c.img is c2.
        return ans;
    }
    void display(){
        cout<<real<<"+i"<<img<<endl;
    }
}; 
int main(){
    Complex c1 (3,4); // parameterized constructor.
    c1.display(); // 3+i4
    Complex c2(5,6);      // parameterized constructor.
    c2.display();  // 5+i6
    Complex c3 = c1+c2;  // operator overloading. Complex operator + (Complex &c). 
    c3.display();
}