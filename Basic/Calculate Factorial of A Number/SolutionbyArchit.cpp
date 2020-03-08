#include<bits/stdc++.h>
using namespace std;


//Program to find factorial by Archit Garg CSE 1st year


long long factorial(long long n){
    if(n==1){
        return 1;
        }

        return n*factorial(n-1);
}

int main()
{
    long long n;
    cin>>n;

    cout<<"N = "<<n<<endl<<"Output = "<<factorial(n);

}
