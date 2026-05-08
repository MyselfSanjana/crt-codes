// Given a number, print the following pattern for n rows. (see the output for details)
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row = 1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<col;
        }
        cout<<endl;
    }
}
