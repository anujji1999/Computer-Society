import java.util.Scanner;
// program to right rotate the Array with K Elements by Archit garg CSE 1st year

class main{
     static Scanner scn= new Scanner(System.in);

     public static void inn(int[] arr){
          for(int i=0;i<arr.length;i++){
            arr[i]= scn.nextInt();}

     }


        public static void reverse(int[] arr,int a, int b){
            int size= arr.length ;
            


           
            while(a<b){
                int temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
                a++;
                b--;
            }

            


        }

        public static void rotate(int[] arr, int r){
            reverse(arr,arr.length-r,arr.length-1);
            reverse(arr,0,arr.length-r-1);
            reverse(arr,0,arr.length-1);
             for(int i=0;i<arr.length;i++){
            System.out.print(arr[i] + " ");}

        }



        public static void main(String[] args){
        System.out.println("enter size of array");
        int size = scn.nextInt();
        int[] arr = new int[size];
         System.out.println("enter array ");
         inn(arr);
        System.out.println("enter rotation ");
        int r = scn.nextInt();
        if(r<0)
        r=r+size;

        if(r>size)
        r=r%size;
       

        rotate(arr,r);
        }

}

    
