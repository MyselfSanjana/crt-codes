#include<iostream>
using namespace std;
int main(){
    int a = 2;
    int *ptr = &a;
    int **ptr2 = &ptr;
    cout<<a;
    cout<<*ptr;
    cout<<ptr;
    cout<<&a;
    cout<<&ptr;
    cout<<*ptr2;
    cout<<ptr2;
}