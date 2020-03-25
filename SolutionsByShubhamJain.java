import java.util.Scanner;

public class GCD {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter numbers: ");
		int N1 = sc.nextInt();
		int N2 = sc.nextInt();
		greatDivisor(N1,N2);
		sc.close();
	}
	static void greatDivisor(int a,int b) {
		if(b == 0) {
			System.out.println(a);
		}
		greatDivisor(b,a%b);
	}

}
