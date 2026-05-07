// swap 2 number using pointer.
#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *b = *a;
    *a=temp;
}
int main(){
    int a = 3;int b = 4;
    swap(&a,&b);
    cout<<a<<" "<<b;
}