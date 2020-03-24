import java.util.Scanner;

public class ReverseArray {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		reverse(arr,N);
		sc.close();
	}
	static void reverse(int arr[],int n){
		for(int i=n-1;i>=0;i--) {
			System.out.print(arr[i]+" ");
		}
	}
}
