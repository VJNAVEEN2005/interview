public class _13_reverse_a_string{
    public static void main(String[] args){
        StringBuilder str = new StringBuilder();
        str.append("Hello") ;
        int start = 0;
        int end = str.length()-1;

        while(start<end){
            char temp = str.charAt(start);
            str.setCharAt(start, str.charAt(end));
            str.setCharAt(end, temp);
            start = start + 1;
            end = end -1;
        }
        System.out.println(str);

    }
}