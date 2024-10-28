#include <iostream>
using namespace std;

int main(){

    int a = 20;
    int b = 40;

    cout<<"a : "<<a<<", b : "<<b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"\na : "<<a<<", b : "<<b;

}