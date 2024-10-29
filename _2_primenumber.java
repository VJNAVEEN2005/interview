
import java.util.Scanner;

public class _2_primenumber{
    public static void main(String[] args){

        int count = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        int a = sc.nextInt();

        if(a<=0){
            System.out.println("It is not a prime number");
        }
        else{
            for(int i=1;i<=a;i++){
                if(a%i == 0){
                    count ++;
                }
            }
            if(count == 2){
                System.out.println("It is a prime Number");
            }
            else{
                System.out.println("It is not a prime number");
            }
        }

    }
}