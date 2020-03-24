import java.util.Scanner;

public class Sort012 {

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
			int i, cnt0=0, cnt2=0, cnt1=0;
			for(i=0;i<n;i++) {
				switch(arr[i]) {
				case 0:cnt0++;
						break;
				case 1:cnt1++;
						break;
				case 2:cnt2++;
						break;
				}
			}
				i = 0;
			while(cnt0>0) {
				arr[i++] = 0;
				cnt0--;
			}
			while(cnt1>0) {
				arr[i++] = 1;
				cnt1--;
			}
			while(cnt2>0) {
				arr[i++] = 2;
				cnt2--;
			}
		}
	}
