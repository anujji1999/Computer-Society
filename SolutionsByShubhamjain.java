import java.util.Scanner;

public class SumOfElements {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		productOfElements(arr,N);
		sc.close();
	}
	static void productOfElements(int arr[],int n){
		int sum = 0;
		for(int i=0;i<n;i++) 
			sum += arr[i];

		System.out.println("Sum of elements: "+ sum);
		}
	}
