import java.util.Scanner;

public class Power{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int base,pow,res=1;
        System.out.print("Base = ");
        base=sc.nextInt();
        System.out.print(",Power =");
        pow=sc.nextInt();
        for(int i=0;i<pow;i++){
               res*=base;
        }
        System.out.println("Output = "+res);
        sc.close();
    }
}
