import java.util.Scanner;

public class ReverseString {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a string: ");
		String s = sc.next();
		char c[]=s.toCharArray();
		String rev="";
		for(int i=c.length-1;i>=0;i--){
				rev+=c[i];
		}
		System.out.println(rev);
		sc.close();
	}

}
