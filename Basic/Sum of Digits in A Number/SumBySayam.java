import java.util.Scanner;

public class Sum{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int num,sum=0,dig;
        System.out.print("Input = ");
        num=sc.nextInt();
        while(num!=0){
             dig=num%10;
             num/=10;
             sum+=dig;
        } 
        System.out.print("Output = "+sum);
        sc.close();
    }
}
