import java.util.Scanner;

public class PrimeOrNot {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number: ");
		int x = sc.nextInt();
		if(x/2 == 0)
			 System.out.println("No");
		else
			 System.out.println("Yes");
		sc.close();

	}

}
