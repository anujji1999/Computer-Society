import java.util.Scanner;

public class OnlyDigits{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s;
        s=sc.nextLine();
        for(int i=0;i<s.length();){
            if(s.matches("[0-9]+")&&s.length()>2){
                 System.out.print("YES");
                 break;
            } 
            else{
                 System.out.print("NO");
                 break;
            }
        }
        sc.close();
    }
}
