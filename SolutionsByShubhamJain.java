import java.util.Scanner;

public class SortZigZag {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		sortTo(arr,N);
		sc.close();
	}
	static void sortTo(int arr[], int n) {
		for(int i=0;i<n-1;i++) {
			if(i%2 == 0) {
			if(arr[i+1]<arr[i]) {
				int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
				}
			}
			else {
			if(arr[i+1]>arr[i]) {
				int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
				}
			}
		}
		for(int i: arr) {
			System.out.print(i+" ");
		}
		System.out.println();
	}
}
