import java.util.Scanner;

public class LeapYear {
    public static void isLeapYear(){
        System.out.println("Enter the year: ");
        Scanner input = new Scanner(System.in);
        boolean isInt = input.hasNextInt();
        if(isInt){
            int year = input.nextInt();
            if(year < 1 || year > 9999){
                System.out.println("No");
            } else {
                if (year % 4 == 0) {
                    if (year % 100 == 0) {
                        if (year % 400 == 0) {
                            System.out.println("Yes");
                        } else {
                            System.out.println("No");
                        }
                    } else {
                        System.out.println("Yes");
                    }
                } else {
                    System.out.println("No");
                }
            }
        }
    }
}
