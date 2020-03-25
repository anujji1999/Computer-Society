import java.util.Scanner;

public class Factorial {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number: ");
		int X = sc.nextInt();
		int result = 1;
		for(int i=1;i<=X;i++) {
			result *= i; 
		}
		System.out.println("Factorial of "+X+"!: "+result);
		sc.close();
	}

}
