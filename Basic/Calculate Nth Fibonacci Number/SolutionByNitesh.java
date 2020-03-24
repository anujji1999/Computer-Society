import java.util.Scanner;

public class Fibonacci {
    public static void fibonacci(){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number: ");
        boolean isInt = input.hasNextInt();
        if(isInt) {
            int n = input.nextInt();
            int a = 0, b = 1, c;
            if (n == 0) {
                System.out.println("Fibonacci series: " + a);
            }
            for (int i = 2; i <= n; i++) {
                c = a + b;
                a = b;
                b = c;
            }
            System.out.println("Fibonacci series: " + b);
        }
    }
}
