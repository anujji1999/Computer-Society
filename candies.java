import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the candies function below.
    static long candies(int n, int[] ar) 
    {
        long c=0;
        int candies[]=new int[n];
        Arrays.fill(candies,1);
        for(int x=0;x<n-1;x++)
        {
            int t1=ar[x];
            int t2=ar[x+1];
            if(t2>t1)
            {
                candies[x+1]=candies[x]+1;
            }
        }
        for(int x=n-1;x>0;x--)
        {
            int t1=ar[x];
            int t2=ar[x-1];
            if(t2>t1)
            {   
                if(candies[x-1]>candies[x])
                continue;
                candies[x-1]=candies[x]+1;
            }
        }
        for(int x=0;x<n;x++)
        {
            c+=candies[x];
        }
        return c;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            int arrItem = scanner.nextInt();
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
            arr[i] = arrItem;
        }

        long result = candies(n, arr);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
