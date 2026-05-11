#include <iostream>
using namespace std;

// bubble sort algorithm

int main(){
    int arr[5];
    int n = 5;
    for (int i =0; i<n;i++){
        cin>>arr[i];
    }
    for (int i =0;i<n;i++){
        for(int j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    //display sorted array
    for (int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
