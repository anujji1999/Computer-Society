import java.util.Scanner;

public class Reverse{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int num,rev=0,dig;
        System.out.print("Input:");
        num=sc.nextInt();
        for(int i=0;i<num;i++){
            dig=num%10;
            rev=rev*10+dig;
            num/=10;
        }
        System.out.print("Reverse:"+rev);
        sc.close();
    }
}
