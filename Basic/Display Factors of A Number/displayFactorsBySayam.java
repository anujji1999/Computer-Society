import java.util.Scanner;

public class displayFactors{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int num;
        System.out.print("N = ");
        num=sc.nextInt();
        System.out.print("Output = ");
        for(int i=1;i<=num/2;i++){
            if(num%i==0)
                System.out.print(i+",");
        }
        System.out.print(num);
        sc.close();
    }
}
