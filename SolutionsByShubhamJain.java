import java.util.Scanner;

public class InsertionSort {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		sort(arr,N);
		for(int i=0;i<N;i++) {
			System.out.print(arr[i]+" ");
		}
		sc.close();
	}
	static void sort(int arr[],int n) {
		for (int i = 1; i < n; ++i) { 
			int key = arr[i]; 
			while (i-1 >= 0 && arr[i-1] > key) { 
				arr[i] = arr[i-1]; 
				i--; 
			} 
			arr[i] = key; 
		} 
	}
}
