#include <iostream>
using namespace std;

//TwoPointer alogrithm

int main(){
    int arr[5]={1,2,3,4,5};
    int n = 5;
    int i = 0;
    int j = n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for (int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}