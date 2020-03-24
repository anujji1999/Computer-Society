import java.util.Scanner;

public class RightRotate {

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
		rotate(arr,N,K);
		sc.close();
	}
	static void rotate(int arr[],int n,int k){
		for(int i=0;i<n;i++) {
			if(i<k)
			System.out.print(arr[n-k+i]+" ");
		}
		for(int i=0;i<n-k;i++) {
			System.out.print(arr[i]+" ");
		}
	}
}


