import java.util.Arrays;
import java.util.Scanner;

public class Find3Largest {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int N = sc.nextInt();
		int arr[] = new int [N];
		System.out.print("Enter elements of array: ");
		for(int i=0;i<N;i++) {
			arr[i] = sc.nextInt();
		}
		large3(arr,N);
		sc.close();
	}
	static void large3(int arr[],int n) {
		Arrays.sort(arr);
		int chec = 0, count = 1; 
		for(int i = 1; i <= n; i++){ 
		
		if(count<4){ 
		if(chec!=arr[n-i])  
		{  
		  // to handle duplicate values 
		   System.out.print(arr[n-i]+" "); 
		   chec = arr[n-i]; 
		   count++; 
		} 
	} 
		else 
			break; 
		} 
	}

}
