import java.util.Scanner;
public class CountVowels{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s;
        int c=0;
        System.out.print("string = ");
        s=sc.nextLine();
        s=s.toLowerCase();
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
                    c++;
        }
        System.out.print("output = "+c);
        sc.close();
    }
}
