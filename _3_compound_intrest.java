public class _3_compound_intrest{
    public static void main(String[] args){

        double principle = 1000;
        double intrest = 5;
        double time = 2;

        double amount = principle * Math.pow(1 + intrest / 100 , time);

        double CI = amount - principle;

        System.out.println(CI);

    }
}