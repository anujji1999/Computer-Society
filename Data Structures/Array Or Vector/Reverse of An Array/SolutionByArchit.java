import java.io.*;
import java.util.*;

public class solution{

    // program to to reverse the original array by Archit garg CSE 1st year
    static Scanner scn= new Scanner(System.in);
    public static void input(int[] arr)
    {
        for(int i =0; i<arr.length; i++)
        {
            arr[i]=scn.nextInt();
        }
    }
    
    public static void output(int[] arr){
        for(int i=0; i<arr.length;i++)
            System.out.print(arr[i]+ " ");
        System.out.println();
    }
    
    public static void reverse(int[] arr, int st){
        
        if(st==arr.length/2){
            return;
        }
        
        int temp;
        temp = arr[st];
        arr[st]=arr[arr.length-1-st];
        arr[arr.length-1-st]=temp;
        
        reverse(arr,st+1);
    }
    

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int n =scn.nextInt();
        int[] arr= new int[n];
        input(arr);
        reverse(arr,0);
        output(arr);
        
    }
}
