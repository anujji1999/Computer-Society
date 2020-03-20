import java.util.Scanner;

public class Fibonacci {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number: ");
		int N = sc.nextInt();
		int f1 = 0,f2 = 1,f3 = 0;
		for(int i=3;i<=N;i++) {
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
		System.out.println(f3);
		sc.close();
	}

}
