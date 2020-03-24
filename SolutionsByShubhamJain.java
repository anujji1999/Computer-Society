import java.util.Scanner;

public class SearchingElement {

		public static void main(String[] args) {
			Scanner sc = new Scanner(System.in);
			System.out.print("Enter size of array: ");
			int N = sc.nextInt();
			int arr[] = new int [N];
			System.out.print("Enter elements of array: ");
			for(int i=0;i<N;i++) {
				arr[i] = sc.nextInt();
			}
			System.out.print("Enter searching element of array: ");
			int ser = sc.nextInt();
			search(arr,N,ser);
			sc.close();
		}
		static void search(int arr[],int n,int ser){
			int start = 0,end = n,flag = 0;
			int mid = n/2;
			while(start <= end) {
				if(arr[mid] == ser)
					flag = 1;
				else if(ser<arr[mid])
					end = mid-1;
				else
					start = mid+1;
			}
			if(flag == 1)
				System.out.println("Yes");
			else
				System.out.println("No");
		}

	}
