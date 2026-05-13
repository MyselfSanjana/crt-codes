// table of 2 using recurssion

#include <iostream>
using namespace std;


void print(int i, int n) {
    if (i>10) {        //base case
        return;
    }
        cout<<2*i<<endl;      //recursive case
        print(i+1,10);
};
int main(){
    int i = 1;
    print(i,10);
}