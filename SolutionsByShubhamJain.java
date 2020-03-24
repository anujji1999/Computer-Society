import java.util.Scanner;

public class NextGreaterElement {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		greatNextElement(arr,N);
		sc.close();
	}
		static void greatNextElement(int arr[],int n) {
			for(int i=0;i<n;i++) {
					int next = -1;
				for(int j=i+1;j<n;j++) {
					if(arr[j]>arr[i]) {
						next = arr[j];
						break;
					}
				}
				System.out.println(arr[i]+" --> "+next);
			}
	}
}
