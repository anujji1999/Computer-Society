import java.util.Scanner;

public class Sort01 {

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
	static void sort(int arr[],int n){
		int x=0, y=n-1;
		while(x<y) {
			if(arr[x] == 1) {
			arr[y] = arr[x] + arr[y];
			arr[x] = arr[y] - arr[x];
			arr[y] = arr[y] - arr[x];
			y--;
			}else {
				x++;
			}
		}
	}

}
