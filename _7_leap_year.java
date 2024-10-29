
import java.util.Scanner;

public class _7_leap_year{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int year;
        
        System.out.println("Enter the year : ");
        year = sc.nextInt();

        if(year%400 == 0){
            System.out.println("Leap Year");
        }
        else if(year%100 == 0){
            System.out.println("Not a Leap Year");
        }
        else if(year%4 == 0){
            System.out.println("Leap Year");
        }
        else{
            System.out.println("Not a Leap Year");
        }
        
    }
}