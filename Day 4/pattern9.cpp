// print the following pattern.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row = 1;row<=n;row++){
        for(int space=1;space<=row-1;space++){
            cout<<" ";
        }
        for(int star=1;star<=n-row+1;star++){
            cout<<"*";
        }
        cout<<endl;
    }
}
