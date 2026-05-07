#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    cout<<a;
    cout<<*ptr;
    cout<<ptr;
    cout<<&a;
    cout<<&ptr;
}
