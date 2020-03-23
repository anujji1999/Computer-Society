import java.util.Scanner;

public class LinearSearch{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int[] a=new int[34];
        int m,item,c=0,loc=0;
        System.out.print("Enter the size of array:");
        m=sc.nextInt();
        System.out.print("Enter the elements in array:");
        for(int i=0;i<m;i++){
            a[i]=sc.nextInt();
        }
        System.out.print("Enter the item to be searched in array:");
        item=sc.nextInt();
        for(int j=0;j<m;j++){
            if(a[j]==item){
                c++;
                loc=j;
                System.out.println("Item found at location "+j);
            }
            else{
                continue;
            }
        }
        if(a[loc]==item){
                System.out.print("Search successful");
                System.out.println("Total number of occurrences of "+item+"in array:"+c);
        }
        else{
                System.out.print("Unsuccessful search");
        }
        sc.close();
    }
}
