public class _11_reverse_number{
    public static void main(String[] args){

    int a = 39402;
    int N = a;
    int ans = 0;
    int count = 0;

    while(N != 0){
        N = N / 10;
        count++;        
    }

    while(a != 0){
        count--;
        ans = ans + (a%10) * (int) Math.pow(10,count);
        a = a / 10;
    }

    System.out.println(ans);

    }
}