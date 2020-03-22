import java.util.Scanner;
public class MatrixAddition{
    public static void main(String[] args){
        int m,n;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no of rows & columns of matrices:");
        m=sc.nextInt();
        System.out.print(" ");
        n=sc.nextInt();
        int a[][]= new int[m][n];
        int b[][]= new int[m][n];
        int c[][]= new int[m][n];
        System.out.println("Enter elements of matrix A:");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]=sc.nextInt();
            }
        }
        System.out.println("Enter elements of matrix B:");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                b[i][j]=sc.nextInt();
            }
        }
        System.out.println("Addition of two matrices:");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(c[i][j]);
                System.out.print(" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
