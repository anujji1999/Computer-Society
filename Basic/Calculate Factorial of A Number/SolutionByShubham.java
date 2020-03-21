package basic;

import java.util.Scanner;

public class factorial {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter the no. for which u want calculate factorial");
		int n = scanner.nextInt();
		int fact = 1;
		for(int i = n; i>0;i--) {
			fact*= i;
		}
		System.out.println(fact);
		
	}

}
