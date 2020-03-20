import java.util.Scanner;

public class PowerFunction {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a base: ");
		int base = sc.nextInt();
		System.out.println("Enter power: ");
		int power = sc.nextInt();
		if(power == 0)
			System.out.println("1");
		 else if(power>0)
			System.out.println(powfunc(base,power));
		else if(power<0)
			System.out.println((double)1/powfunc(base,power));
		sc.close();
	}
	static int powfunc(int base, int power) {
		int result = 1;
		power = Math.abs(power);
		for(int i=1;i<=power;i++) {
			result *= base;
		}
		return result;
	}

}
