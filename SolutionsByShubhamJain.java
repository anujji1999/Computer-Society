import java.util.Scanner;

public class LCM {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter numbers: ");
		int N1 = sc.nextInt();
		int N2 = sc.nextInt();
		int low = (N1>N2)?N1:N2;
		while(true) {
			if(low%N1 == 0 && low%N2 == 0)
				break;
			low++;
		}
		System.out.println(low);
		sc.close();
	}

}
