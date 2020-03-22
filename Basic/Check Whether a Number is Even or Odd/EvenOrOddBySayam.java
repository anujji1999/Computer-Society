import java.util.Scanner;

public class EvenOrOdd{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int num;
        System.out.print("N = ");
        num=sc.nextInt();
        if(num%2==0)
           System.out.println("Output = EVEN");
        else
           System.out.println("Output = ODD");
        sc.close();
    }
}
