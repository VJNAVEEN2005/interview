public class _6_binary_to_decimal{
    public static void main(String[] args){

        int N = 11011;
        int a = 1;
        int ans = 0;

        while(N != 0){
            ans = ans + (N%10) * a;
            N = N/10;
            a =  a * 2;
        }

        System.out.println(ans);

    }
}