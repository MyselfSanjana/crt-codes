// sum of all 2D array elements
#include <iostream>
using namespace std;
int arr[2][2];
int main(){
    int sum=0;
    for(int i = 0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}