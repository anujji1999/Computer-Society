import java.util.Scanner;
public class Leap{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int year;
        boolean isLeap=false;
        System.out.println("Input:");
        year=sc.nextInt();
        if(year%4==0){
            if(year%100==0){
                    if(year%400==0)
                        isLeap=true;
                    else
                        isLeap=false;
            }
            else
                isLeap=true;
        }
        else
            isLeap=false;
        if(isLeap==true)
            System.out.println("Yes");
        else
            System.out.println("No");
        sc.close();
    }
}
