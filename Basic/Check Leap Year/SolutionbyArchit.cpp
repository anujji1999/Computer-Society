#include<bits/stdc++.h>
using namespace std;


//Program to  to check that it's leap year or not by Archit Garg CSE 1st year


int check_leap_year(long long n){
    if(n%4==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }       
}


int main()
{
    long long n;
    cin>>n;

   if(check_leap_year(n)==1)
   {
       cout<<"Yes"; 
   }
   else
   {
       cout<<"No"; 
   }
   

}


      
    
