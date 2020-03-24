import java.util.Arrays;
import java.util.Scanner;

public class BiggestNumberForm {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		formBigInt(arr,N);
		sc.close();
	}
	static void formBigInt(int arr[],int n) {
		Arrays.sort(arr);
		for(int i=n-1;i>=0;i--) {
			System.out.print(arr[i]);
		}
		System.out.println();
	}

}
