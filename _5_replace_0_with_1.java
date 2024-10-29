

public class _5_replace_0_with_1{
    public static void main(String[] args){

        int N = 1301032;
        int ans = 0;
        int i = 0;

        while(N != 0){
            if(N%10 == 0){
                ans = (int) (ans + 1 * Math.pow(10, i));
            }
            else{
                ans =  (int) (ans + (N%10) * Math.pow(10,i));
            }

            N = N / 10;
            i++;
        }

        System.out.println(ans);

    }
}