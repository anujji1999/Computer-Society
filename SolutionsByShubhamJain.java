import java.util.Scanner;

public class SortRotated {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		boolean ans = checkArray(arr,N);
		if(ans == true) {
			System.out.print("Yes");
		}else {
			System.out.print("No");
		}
		sc.close();
	}
	static boolean checkArray(int arr[], int n){

	    boolean rotate = false;

	    for(int i=0; i<n-1; i++){
	        if(arr[i] > arr[i+1]){
	            if(rotate == false)
	            	return true;
	        }
	    }
	    return false;
	}
}
