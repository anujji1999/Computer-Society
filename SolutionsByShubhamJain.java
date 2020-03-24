import java.util.Arrays;
import java.util.Scanner;

public class Median {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		median(arr,N);
		sc.close();
	}
	static void median(int arr[],int n){
		Arrays.sort(arr);
		double median = 0;
		if(n%2 == 0) {
			median = (double)(arr[(n-1)/2]+arr[n/2])/2;
		}else {
			median = arr[n/2];
		}
		System.out.println(median);
	}

}
