#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    double principle = 1000;       // amount they have bought

    double intrest = 5;         // it is %

    int time = 2;               // time in year or any time

    double amount = principle * pow( 1 + intrest/100,time) ;

    double compund_intrest = amount - principle;

    cout<<"The CI = "<<compund_intrest;

}