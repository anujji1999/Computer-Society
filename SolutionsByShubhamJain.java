import java.util.Scanner;

public class SmallestMissingNumber {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		System.out.print("Enter range of elements: ");
		int M = sc.nextInt();
		missingDigit(arr,M);
		sc.close();
	}
	static void missingDigit(int arr[],int m) {
		int i;
		for(i=0;i<m;i++) {
			if(i != arr[i])
				break;
		}
		System.out.println("Smallest missing element: "+i);
	}
}
