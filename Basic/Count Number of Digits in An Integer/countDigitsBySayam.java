import java.util.Scanner;
public class countDigits{
    public static void main(String[] args){
          Scanner sc=new Scanner(System.in);
          int num,c=0;
          System.out.print("N = ");
          num=sc.nextInt();
          while(num!=0){
              num/=10;
              c++;
          }
          System.out.println("Output = "+c);
          sc.close();
    }
}
