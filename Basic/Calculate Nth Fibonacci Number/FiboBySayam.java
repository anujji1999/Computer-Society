import java.util.Scanner;

public class Fibo{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int N,firstnum=0,secnum=1,i=3,thirdnum;
        System.out.print("N = ");
        N=sc.nextInt();
        thirdnum=firstnum+secnum;
        while(i<=N){
               thirdnum=firstnum+secnum;
               firstnum=secnum;
               secnum=thirdnum;
               i++;   
        }
        System.out.println("Output = "+thirdnum);
        sc.close();
    }
}
