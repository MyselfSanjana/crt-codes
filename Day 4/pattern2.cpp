// Given a number and a position, find the digit at that position in the number. 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num;
    cin>>num;
    int count = 1;
    while(n>0){
        int rem = n%10;
        if(count == num){ 
            cout<<rem;
            break;
        }else{
            count++;
            n = n/10; 
        }
    }
    return 0 ;
}