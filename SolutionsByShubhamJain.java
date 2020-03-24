import java.util.Scanner;

public class SearchUnsortArray {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		System.out.print("Enter element to be searched: ");
		int K = sc.nextInt();
		if(search(arr,N,K) == -1) {
			System.out.print("No");
		}else {
			System.out.print("Yes");
		}
		sc.close();
	}
	static int search(int arr[],int n,int k){
		    int temp = arr[n - 1];
		    arr[n - 1] = k;
		    int pos = -1;
		    while (arr[++pos] != k);

		    arr[n - 1] = temp;
		    
		    if (arr[pos] == k)
		        return pos;
		    return -1;

	}
}
