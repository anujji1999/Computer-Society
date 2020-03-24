import java.io.*;
import java.util.*;

public class solution {
    // program to compute product of all the elements by Archit garg CSE 1st year

    public static int product(int[] arr,int idx){
        if(idx==arr.length){
            return 1;
        }

        return arr[idx]*product(arr,idx+1);
    }

    public static void main(String[] args) {
       
        Scanner scn=new Scanner(System.in);
        System.out.println("Enter size");
        int n = scn.nextInt();

        int[] arr=new int[n];
        System.out.println("Enter array");
        for(int i=0;i<n;i++)
            arr[i]=scn.nextInt();

            System.out.println(product(arr,0));
        
      
        }
}
