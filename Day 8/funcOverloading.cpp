#include <iostream>
using namespace std;

class Student{
    int length;
    int breadth;
    int side;

    public:
    int area (int l,int b){
        return (l*b);
    }
    int area(int s){
        return(s*s);
    }
};
int main(){
    Student obj;
    cout<<obj.area(5,10)<<endl;
    cout<<obj.area(5)<<endl;
}