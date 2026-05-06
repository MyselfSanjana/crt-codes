// find the reverse of the given number.
#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int rev = 0;
    while(n>0){
        
        int rem = n%10; // find the last digit.
        rev = rev*10+rem; //calculate the reverse of that number.
        n = n/10; //remove the last digit.
    }
    cout<<rev;
    return 0 ;
}