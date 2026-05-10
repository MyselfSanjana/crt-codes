#include <iostream>
using namespace std;

//char array
int main()
{
    string str = "hello";
    int n = str.length();
    for(int i = 0; i<str.length();i++){
        cout<<str[i];
    }
}