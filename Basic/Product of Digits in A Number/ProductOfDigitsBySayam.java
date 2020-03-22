import java.util.Scanner;

public class ProductOfDigits{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int num,prod=1,dig;
        System.out.print("Input = ");
        num=sc.nextInt();
        while(num!=0){
             dig=num%10;
             num/=10;
             prod*=dig;
        }
        System.out.print("Output = "+ prod);
        sc.close();
    }
}
