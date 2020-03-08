#include<bits/stdc++.h>
using namespace std;


//Program to check if it contains only digits by Archit Garg CSE 1st year


string check_digit(string str){
   bool isprime=true;

   for(int i=0;i<=str.size()-1;i++){
       if(str.at(i)<48 || str.at(i)>57)  //comparing ASCII value
       {
           isprime = false;
           break;
       }
   }

   if(isprime==true)
   return "Yes";
   else
   return "No";
   

}


int main()
{
    string str;


    getline(cin,str);
    cout<<"Output = "<<check_digit(str);
    
   

}


      
    
