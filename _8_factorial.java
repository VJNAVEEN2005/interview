public class _8_factorial{

    static double factorial(int a){
        double ans = 1;
        for(int i=1 ; i<=a ; i++){
            ans = ans * i;
        }
        return ans;
    }

    static double factorial_recursion(int a){
        if(a==0){
            return 1;
        }
        return a * factorial_recursion(a-1); 
    }

    public static void main(String[] args){

        System.out.println(factorial(5));
        System.out.println(factorial_recursion(5));

    }
}