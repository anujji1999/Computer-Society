import java.util.Scanner;

public class FactorsOfNumber {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number: ");
		int N = sc.nextInt();
		System.out.print("Factors: ");
		for(int factor = 1; factor <= N; ++factor)
	    {
	        if(N % factor == 0)
	            System.out.print(factor+" ");
	    }

	System.out.println();
	sc.close();
	}
}
