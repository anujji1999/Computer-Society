#include<iostream>
using namespace std;
int factorial(int n)
{
if(n==1)
{
return 1;
}
else
{
return n*factorial(n-1);
}
}
int main()
{
int n,ans;
cin>>n;
ans=factorial(n);
cout<<"Output="<<ans<<endl;
return 0;
}
