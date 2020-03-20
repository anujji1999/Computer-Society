import java.util.Scanner;

public class EvenOdd {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number: ");
		int x = sc.nextInt();
		if (isEven(x))
			 System.out.println("Even");
		else
			 System.out.println("Odd");
		sc.close();

	}
	static boolean isEven(int n) 
    { 
        boolean isEven = true; 
          
        for (int i = 1; i <= n; i++)
            isEven = !isEven; 
        return isEven; 
    } 

}
