import java.util.Scanner;

public class LengthOfString {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a string: ");
		String s = sc.next();
		int i = 0;
		for(char c: s.toCharArray())
	         i++;
		System.out.println("Length of String: "+i);
		sc.close();
		}
	}


