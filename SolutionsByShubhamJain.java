import java.util.Scanner;

public class MinElement {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		Min(arr,N);
		sc.close();
	}
	static void Min(int arr[],int n) {
			int res = arr[0];
        for (int i = 1; i < n; i++) {
        		if(res>arr[i]) {
        			res = arr[i];
        		}
        }
        System.out.println("Minimum element in array: "+res);
	}
}
