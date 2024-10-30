#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int a = 39493;
    int N = a;
    int ans = 0;
    int count = 0;

    while(N != 0){
        N = N / 10;
        count++;        
    }

    N = a;

    while(a != 0){
        count--;
        ans = ans + (a%10)*pow(10,count);
        a = a / 10;
    }

    N == ans ? cout<<"Palindrome" : cout<<"Not Palindrome" ;
     
}