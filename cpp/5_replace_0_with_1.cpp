#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int N = 10106570;
    int ans = 0;
    int i = 0;

    while(N != 0){
        if((N%10) == 0){
            ans = ans + 1 * pow(10,i);
        }
        else{
            ans = ans + (N%10) * pow(10,i);
        }
        N = N/10;
        i++;
    }

    cout<<ans;

}