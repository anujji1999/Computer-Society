import java.util.Scanner;
import java.lang.Character;
public class checkVowel{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        char c;
        c=sc.next().charAt(0);
        c=Character.toLowerCase(c);
        if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
             System.out.println("Output = Vowel");
        else
             System.out.println("Output = Consonant");
        sc.close();
    }
}
