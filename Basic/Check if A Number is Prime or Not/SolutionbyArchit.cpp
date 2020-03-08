#include<bits/stdc++.h>
using namespace std;


//Program to check whether it's prime or not by Archit Garg CSE 1st year


string check_prime(int n){
   bool isprime=true;

   for(int i=2;i*i<=n;i++){
       if(n%i==0){
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
    long long n;


    cin>>n;
    cout<<"Output = "<<check_prime(n);
    
   

}


      
    
