#include<bits/stdc++.h>
using namespace std;


//Program to check Whether a Number is Even or Odd by Archit Garg CSE 1st year


bool check_even(int n){
    bool check=true;

    for(int i=1;i<=n;i++)
    check = !check;

    return check;       
}


int main()
{
    long long n;


    cin>>n;
    if(check_even(n))
    cout<<"Output = EVEN";
    else
     cout<<"Output = ODD";
    
   

}


      
    
