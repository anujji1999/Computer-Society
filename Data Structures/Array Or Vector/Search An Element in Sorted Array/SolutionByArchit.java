import java.util.Scanner;
// program to find an element which is given to you by Archit garg CSE 1st year

class solution{
    static Scanner scn= new Scanner(System.in);

      public static int binarySearch(int arr[], int low, int high, int key) 
    { 
        if (high < low) 
            return -1; 
  
        
        int mid = (low + high) / 2; 
        if (key == arr[mid]) 
            return mid; 
        if (key > arr[mid]) 
            return binarySearch(arr, (mid + 1), high, key);
            else 
        return binarySearch(arr, low, (mid - 1), key); 
    } 

      public static void main(String[] args){

           System.out.println("enter size of array");
           int size = scn.nextInt();
           int[] arr = new int[size];
           System.out.println("enter array");
           for(int i=0;i<size;i++){
           arr[i]=scn.nextInt();
           }
           System.out.println("enter no.");
           int key=scn.nextInt();


        


          int idx= binarySearch(arr,0,arr.length,key);
          System.out.println(idx+1);
      }

}


