import java.util.Arrays;
import java.util.Scanner;

public class KthSmallestNumber {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		System.out.print("Enter value of k: ");
		int K = sc.nextInt();
		SmallKthNumber(arr,N,K);
		sc.close();
	}
	static void SmallKthNumber(int arr[],int n,int k){
		Arrays.sort(arr);
		System.out.println(k+"th Smallest Number: "+arr[k-1]);
	}
}
