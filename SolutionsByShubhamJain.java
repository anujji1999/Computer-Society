import java.util.Scanner;
import java.util.regex.Pattern;

public class ContainDigits {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a string: ");
		String s = sc.next();
		if(Pattern.matches("^\\d+$",s)) {
			System.out.println("Yes");
		}else {
			System.out.println("No");
		}
		sc.close();

	}

}
