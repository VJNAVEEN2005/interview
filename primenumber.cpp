#include <iostream>
using namespace std;

int main(){

    int a ,i ;
    int count = 0;

    cout<<"Enter the number : ";
    cin>>a;

    if(a<=0){
        cout<<"It is not a prime number";
    }

    else{
        for(i=1;i<=a;i++){
            if((a%i)==0){
                count++;
            }
        }
        if(count==2){
            cout<<"It is the prime number";
        }
        else{
            cout<<"It is not a prime number";
        }
    }


}