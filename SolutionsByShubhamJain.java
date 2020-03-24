import java.util.Scanner;

public class RightSmallElement {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		NsmallElement(arr,N);
		for(int i=0;i<N;i++) {
			System.out.print(arr[i]+" ");
		}
		sc.close();
	}
		static int NsmallElement(int arr[],int n) {
			for(int i=0;i<n;i++) {
				int sum = 0;
				for(int j=i+1;j<n;j++) {
					if(arr[j]<arr[i]) 
						sum++;
				}
				arr[i] = sum;
			}
			return 0;
		}
}
