#include <iostream>
using namespace std;

// selection sort algorithm
int main(){
    int arr[5]= {5,4,3,2,1};
    int n = 5;
    for (int i=0;i<=n-1;i++){
        int min_elem_index = i;
        for(int j = i+1;j<=n-1;j++){
            if(arr[j]<arr[min_elem_index]){
                min_elem_index = j;
            }
        }
        swap(arr[i], arr[min_elem_index]);
    }
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}