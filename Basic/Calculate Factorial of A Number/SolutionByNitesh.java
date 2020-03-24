import java.util.Scanner;

public class FactorialOfANumber {

    public static void factorialOfANumber(){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number: ");
        boolean isInt = input.hasNextInt();
        if(isInt) {
            int Number = input.nextInt();
            int factorial = 1;
            while (Number > 0) {
                factorial *= Number;
                Number--;
            }
            System.out.println("Factorial of the given number: " + factorial);
        } else
            System.out.println("Error! Wrong input");
        input.close();
    }
}
