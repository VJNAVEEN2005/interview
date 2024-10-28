

import java.util.Scanner;

public class _1_largest{
    public static void main(String[] args){

        Scanner sc = new  Scanner(System.in);

        System.out.println("Enter First Number : ");
        int a = sc.nextInt();

        System.out.println("Enter Second Number : ");
        int b = sc.nextInt();

        System.out.println("Enter Third Number : ");
        int c = sc.nextInt();

        /* 
        if (a>b && a>c) {
            System.out.println(a+" is Largest Number");
        }
        else if(b>a && b>c){
            System.out.println(b+" is Larger Number");
        }
        else{
            System.out.println(c+" is Largest Number");
        }*/

        int largest1 = a>b?a:b;
        int largest2 = c>largest1 ? c:largest1;

        System.out.println(largest2+" is the largest number");
    }
}