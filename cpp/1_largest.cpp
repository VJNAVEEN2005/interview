#include <iostream>

int main(){
    
    int a, b, c, i;
    printf("Enter the Number : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        printf("The largest value %d",a);
    }
    else if(b>a && b>c){
        printf("The largest value %d",b);
    }
    else{
        printf("The largest value %d",c);
    }

}