import java.util.Scanner;

public class Palindrome {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a string: ");
		String s = sc.next();
		char c[]=s.toCharArray();
		String rev="";
		for(int i=c.length-1;i>=0;i--){
				rev+=c[i];
		}
		if(s.equals(rev)) {
			System.out.println("Yes");
		}else {
			System.out.println("No");
		}
		sc.close();

	}

}
