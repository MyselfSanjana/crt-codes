#include <iostream>
using namespace std;

void reverseArray(int arr[],int n, int i , int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    reverseArray(arr,n,0,n-1);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}