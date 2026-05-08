// program to convert uppercase to lowercase using function.

#include <iostream>
using namespace std;

char toLowerCase(char ch){
    char sum = ch + 32;
    return sum;
}

int main()
{
    char ch;
    cin>>ch;
    cout<<toLowerCase(ch);
    
}