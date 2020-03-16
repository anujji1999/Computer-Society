#include<iostream>

using namespace std;

long long factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    cout<<"N = ";
    cin>>n;
    if(n<0)
    {
        cout<<endl<<"Enter positive number"<<endl;

    }
    else
        cout<<endl<<"Factorial of N = "<<factorial(n);
    return 0;
}
