//print the pattern
#include <iostream>
using namespace std;

int main()
{
    for(int row = 1;row <= 5;row++){
        for(int col=1;col<=5;col++){
          if(row==1 || row == 5 || col==1 ||col == 5){  //even
            cout<<"*";
          }else{
              cout<<" ";
          }
        }
        cout<<endl;
    }
}