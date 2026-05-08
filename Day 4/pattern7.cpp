// Given a number n, print the following pattern.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row = 1;row<=2*n-1;row++){
        if(row<=n){
        for(int col=1;col<=row;col++){
            cout<<col;
        }
        }else{
        for(int col=1;col<=2*n-row;col++){
            cout<<col;
        }
        }
        cout<<endl;
    }
}
