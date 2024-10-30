#include<iostream>
using namespace std;

int main(){

    //given
    int arr1[]={2, 4, 6, 8, 9, 10 ,12};
    int arr2[]={2, 4, 6, 8, 10, 12};
    int n = 7;

    int output;
        
    for(int i = 0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            output = i;
            break;
        }
    }

    cout<<output;
}