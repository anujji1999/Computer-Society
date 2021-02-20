import java.util.Scanner;

public class GCD{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int num1,num2,numerator,denominator,remainder,gcd;
        num1=sc.nextInt();
        System.out.print("and");
        num2=sc.nextInt();
        if(num1>num2){
            numerator=num1;
            denominator=num2;
        }
        else{
            numerator=num2;
            denominator=num1;
        }
        remainder=numerator%denominator;
        while(remainder!=0){
            numerator=denominator;
            denominator=remainder;
            remainder=numerator%denominator;
        }
        gcd=denominator;
        System.out.print("Output = "+gcd);
        sc.close();
    }
}
