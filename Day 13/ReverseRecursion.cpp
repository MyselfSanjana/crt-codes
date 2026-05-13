#include <iostream>
using namespace std;

void reverseArray(int arr[],int i , int j){
    if(i>j){
        return;
    }
        swap(arr[i],arr[j]);
        reverseArray(arr,i+1,j-1);
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    reverseArray(arr,0,n-1);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}