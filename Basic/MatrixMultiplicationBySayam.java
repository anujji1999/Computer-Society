import java.util.Scanner;
public class MatrixMultiplication{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int m,n,p,q;
        System.out.println("Enter no of rows & columns of matrix A:");
        m=sc.nextInt();
        n=sc.nextInt();
        System.out.println("Enter no of rows & columns of matrix B:");
        p=sc.nextInt();
        q=sc.nextInt();
        int a[][]= new int[m][n];
        int b[][]= new int[p][q];
        int c[][]= new int[m][q];
        System.out.println("Enter elements of matrix A:");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]=sc.nextInt();
            }
        }
        System.out.println("Enter elements of matrix B:");
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                b[i][j]=sc.nextInt();
            }
        }
        System.out.println("Multiplication of two matrices:");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                c[i][j]=0;
                for(int k=0;k<p;k++)
                {
                    c[i][j]+=a[i][j]*b[i][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                System.out.print(c[i][j]);
                System.out.print(" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
