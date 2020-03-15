package basic;

import java.util.Scanner;

public class fibonacci {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter the no. for which u want calculate fibonacci");
		int n = scanner.nextInt();
		int first=0,second=1,third=0;
		
		for(int i = n-2; i>0;i--) {
			third=first+second;
			first = second;
			second = third;
		}
		System.out.println(third);
		
	}

}
