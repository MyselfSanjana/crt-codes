#include <iostream>
using namespace std;

bool binarySearch(int arr[],int target,int s , int e){
    if(s>e){
        return false;
    }
    int mid = (s+e)/2;
    if(arr[mid] == target){
        return true;
    }
    else if(arr[mid] > target){
        return binarySearch(arr,target,s,mid-1);
    }else{
        return binarySearch(arr,target,mid+1,e);
    }

}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int target = 4;
    int n = 6;
    if(binarySearch(arr,target,0,n-1) == true){
        cout<<"present"<<endl;
    }else{
        cout<<"absent"<<endl;
    }
};