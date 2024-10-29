#include<iostream>
using namespace std;


unsigned long long int factorial(int a){
    unsigned long long int ans = 1;
    for(int i = 1 ; i<=a ; i++){
        ans = ans * i;
    }
    return ans;
}

double factorial_recursion(int a){
    if(a == 0){
        return 1;
    }
    return a * factorial_recursion(a-1);
}


int main(){

    cout<<factorial(13)<<endl;
    cout<<factorial_recursion(9)<<endl;
    

}