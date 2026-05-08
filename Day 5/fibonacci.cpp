// C++ program to print Fibonacci series up to n terms
#include<iostream>
using namespace std;
 
void fib(int n){
    if(n==1){
        cout<<0;
    }else if(n==2){
        cout<<0<<" "<<1;
    }else{
        int a = 0,b = 1;
        cout<<a<<" "<<b<<" ";
        int i = 3;
        while(i<=n){
            int c =a+b;
            cout<<c<<" ";
            a=b;
            b=c;
            i++;
        }
    }
}


int main(){
    int n;
    cin>>n;
    fib(n); 
}