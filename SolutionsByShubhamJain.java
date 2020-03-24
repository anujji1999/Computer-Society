import java.util.Arrays;
import java.util.Scanner;

public class SmallLargest {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		SmallLarge(arr,N);
		sc.close();
	}
	static void SmallLarge(int arr[],int n){
		Arrays.sort(arr);
		for(int i=0;i<=n/2;i++) {
			System.out.print(arr[i]+" ");
			if(i<n/2)
			System.out.print(arr[n-i-1]+" ");
		}
	}

}
