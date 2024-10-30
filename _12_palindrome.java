public class _12_palindrome{
    public static void main(String[] args){

        int a = 39493;
        String N = String.valueOf(a);

        StringBuilder temp = new StringBuilder();

        temp.append(N);
        temp.reverse();

        N = String.valueOf(temp);

        String output = (a == Integer.valueOf(N) ? "Palindrome" : "Not Palindrome");
        
        System.out.println(output);

    }
}