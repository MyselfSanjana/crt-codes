//inverted character triangle pattern.

#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    for(int row = n;row>=1;row--){
        for(int space=n;space>row;space--){
            cout<<" ";
        }
        char ch ='A';
        for(int col=1;col<=2*row-1;col++){
            cout<<ch;
            ch = ch+1;
        }
        
        cout<<endl;
    }
}
