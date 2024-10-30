public class _10_roots_of_quadratic{
    public static void main(String[] args){

        double a = 2.3;
    double b = 4;
    double c = 5.6;

    double d = Math.pow(b,2) - (4*a*c);

    double ans1 , ans2;
    double cans1 , cans2;

    if(d == 0){
        System.out.println("Root are real and equal");
        ans2 = ans1 = (-b / (2*a) );
        System.out.println(ans1+"\n"+ans2);
    } 
    else if (d > 0){
        System.out.println("Roots are real and different");
        ans1 = ((-b + Math.sqrt(d)) / (2*a) );
        ans2 = ((-b - Math.sqrt(d)) / (2*a) );
        System.out.println(ans1+"\n"+ans2);
    }
    else{
        System.out.println("Roots are complex");
        ans1 = (-b/(2*a));
        cans1 = Math.sqrt(-d) / (2*a);    // Take the square root of the positive value of d
        /*
        The issue is that when the discriminant 𝑑=𝑏^2−4𝑎𝑐 is negative,
        taking the square root of d in sqrt(d) results in NaN (not a number)
        */
        System.out.println(ans1+"+i"+cans1+"\n"+ans1+"-i"+cans1);
    }

    }
}