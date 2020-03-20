import java.util.Scanner;

public class CountDigits {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number: ");
		double N = sc.nextDouble();
		int count = 0;
		count = (int)Math.ceil(Math.log10(N));
		System.out.println("No. of Digits: "+count);
		sc.close();
	}

}
