// program to convert decimal to binary using function.
#include <iostream>
using namespace std;

int toBinary(int n){
    int binary = 0;
    int place = 1;
    
    while(n>0){
        int rem =n%2;
        binary = binary + (rem * place);
        place = place *10;
        n = n / 2;
    }
    return binary;
}

int main()
{
    int n;
    cin>>n;
    cout<<toBinary(n);
}