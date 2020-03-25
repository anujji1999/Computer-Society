import java.util.Scanner;

public class SumOfDigits {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number: ");
		int N = sc.nextInt();
		int res = 0;
		while(N != 0) {
			res += N%10;
			N /= 10;
		}
		System.out.println(res);
		sc.close();
	}

}
