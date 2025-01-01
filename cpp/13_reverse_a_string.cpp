#include<iostream>
using namespace std;

int main(){
    string str = "Hello";
    int start = 0;
    int end = str.length()-1;

    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }

    cout<<str;
}