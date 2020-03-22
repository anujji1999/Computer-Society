import java.util.Scanner;

public class LCM{
    public static void main(String[] args){
        int num1,num2,numerator,denominator,remainder,lcm;
        Scanner sc=new Scanner(System.in);
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
        lcm=(num1*num2)/denominator;
        System.out.print("Output = "+lcm);
        sc.close();
    }
}
