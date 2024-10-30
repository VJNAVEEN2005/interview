#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,5,3};
    int ans = 0;

    int len = sizeof(arr)/sizeof(arr[0]);
        
    for(int i = 0 ; i<len;i++){
        ans = ans + arr[i];
    }

    int N = len + 1;
        
    int sum = (N * (N+1))/2 ;
        
    int output = sum - ans;

    cout<<output;
}