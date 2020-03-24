import java.util.Scanner;

public class MissingNumber {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		missingNumber(arr,N);
		sc.close();
	}
	static void missingNumber(int arr[],int m) {
		int total = 1;
		for (int i = 2; i<=(m+1); i++) 
		{ 
			total+=i; 
			total -= arr[i-2]; 
		} 
		System.out.println(total);
	}

}
