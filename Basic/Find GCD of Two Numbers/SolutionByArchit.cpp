#include<bits/stdc++.h>
using namespace std;
//Program to find GCD of two number by Archit 

int gcd(int a,int b){
    int x;
    for(int i=1; i<=b;i++){
        if(a%i==0 && b%i==0){
            x=i;
        }
    }

    return x;
}

int main()
{

    int a,b;
    cin>>a>>b;
   
    int c;
    if(a>b)
    cout<<gcd(a,b);
    else
    {
        cout<<gcd(b,a);
    }
    
}
