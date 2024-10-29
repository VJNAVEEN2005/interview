
import java.util.Scanner;

public class _9_armstrong{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        int a;
        int ans = 0;
        int count = 0;

        System.out.println("Enter the Number : ");
        a = sc.nextInt();

        int N = a;

        while(N != 0){
            N = N/10;
        count++;
        }

        N = a;

        while(N != 0){
        ans = ans + (int) Math.pow((N%10),count);
        N = N/10;
        }

        String print = (a == ans) ? "Armstrong" : "Not Armstrong";

        System.out.println(print);

    }
}