import java.util.Scanner;

public class ReverseOfString{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s,reverse="";
        s=sc.nextLine();
        for(int i=s.length()-1;i>=0;i--){
             reverse=reverse+s.charAt(i);
        }
        System.out.print("Output = "+reverse);
        sc.close();
    }
}
