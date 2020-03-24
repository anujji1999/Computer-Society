import java.util.Scanner;

public class SelectionSort {

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
		sc.close();
	}
	static void sort(int arr[],int n){
		for(int i=0;i<n-1;i++) {
			for(int j=i+1;j<n;j++) {
				if(arr[j]<arr[i]) {
			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
				}
			}
		}
		for(int i=0;i<n;i++) {
			System.out.print(arr[i]+" ");
		}
	}
}
