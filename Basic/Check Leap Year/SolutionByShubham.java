package basic;

import java.util.Scanner;

public class leapyear {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter the no. for which u want calculate fibonacci");
		int year = scanner.nextInt();
		boolean leap = false;
        if(year % 4 == 0)
        {
            if( year % 100 == 0)
            {
                // year is divisible by 400, hence the year is a leap year
                if ( year % 400 == 0)
                    leap = true;
                else
                    leap = false;
            }
            else
                leap = true;
        }
        else
            leap = false;

        if(leap)
            System.out.println("Yes");
        else
            System.out.println("No");
    }
	}
