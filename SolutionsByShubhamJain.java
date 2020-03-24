import java.util.Scanner;

public class MoveZeroEnd {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		move(arr,N);
		for(int i=0;i<N;i++) {
			System.out.print(arr[i]+" ");
		}
		sc.close();
	}
	static void move(int arr[],int n){
		int count = 0;
		for(int i=0;i<n;i++) {
			if(arr[i] != 0) {
				arr[count++] = arr[i];
			}
		}
		while(count<n) {
			arr[count++] = 0;
		}
	}

}
