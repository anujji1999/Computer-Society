package basic;

import java.util.Scanner;

public class vowel {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		char n = scanner.next().charAt(0);
		if(n=='a' || n=='A' || n=='e' || n=='E' || n=='i' || n=='I' || n=='o' || n=='O' || n=='u' || n=='U') {
		System.out.println("Vowel");
	}
		else {
			System.out.println("Consonant");
		}
	}

}
