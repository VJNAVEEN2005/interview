#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int a;
    int ans = 0;
    int count = 0;

    cout<<"Enter the number : ";
    cin>>a;

    int N = a;

    while(N != 0){
        N = N/10;
        count++;
    }

    N = a;

    while(N != 0){
        ans = ans + pow((N%10),count);
        N = N/10;
    }

    (a == ans) ? cout<<"It is Armstrong" : cout<<"It is not Armstrong";
}