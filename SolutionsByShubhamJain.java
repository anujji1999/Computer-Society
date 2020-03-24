import java.util.Arrays;
import java.util.Scanner;

public class SecondLargest {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		secLarge(arr,N);
		sc.close();
	}
	static void secLarge(int arr[], int n) {
		Arrays.sort(arr);
		if(n<2)
			System.out.println("No second Largest element");
		else
			System.out.println(arr[n-2]);
	}
}
