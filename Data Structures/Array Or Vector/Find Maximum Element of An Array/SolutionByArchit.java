import java.io.*;
import java.util.*;

public class solution {
    // program to ind the maximum element of the array by Archit garg CSE 1st year

    public static void main(String[] args) {
       
        Scanner scn=new Scanner(System.in);
        System.out.println("Enter size");
        int n = scn.nextInt();

        int[] arr=new int[n];
        System.out.println("Enter array");
        for(int i=0;i<n;i++)
            arr[i]=scn.nextInt();
        
        int max=arr[0];
        for(int i=1;i<n;i++){
            if(max<arr[i])
                max=arr[i];
        }
        
        System.out.println("max value is "+max);
        }
}
