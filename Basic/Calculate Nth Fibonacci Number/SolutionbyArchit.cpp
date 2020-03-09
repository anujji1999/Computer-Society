#include<bits/stdc++.h>
using namespace std;


//Program to calculate Nth Number in Fibonacci Series by Archit Garg CSE 1st year


long long nth_fibonacci(long long n){
    
    if(n==1){
        return 0;
        }

    if(n==2){
        return 1;
        }


        int count, n1=0,n2=1;

        for(int i=1;i<=n-2;i++){
            count=n1+n2;
            n1=n2;
            n2=count;

            
        }

        return count;
}

int main()
{
    long long n;
    cin>>n;

    cout<<"N = "<<n<<endl<<"Output = "<<nth_fibonacci(n);

}
