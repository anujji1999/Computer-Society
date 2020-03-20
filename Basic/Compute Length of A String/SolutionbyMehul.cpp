/* Finding length of string in JAVA */ 

import java.io.*;
class len
{   
    public static void main()throws IOException
   {
       BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
       System.out.println("Enter string");
       String str=br.readLine();
       int len=str.length();
       System.out.println(len);
    }
}
