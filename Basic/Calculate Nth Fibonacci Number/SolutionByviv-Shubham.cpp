#include<iostream>
using namespace std;
int Fibonacci(int n)
{if(n==2)
    {
        return 1;
    }
if(n==1)
    {
    return 0;
    }
 return Fibonacci(n-1)+Fibonacci(n-2);
}


int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
  cout<<endl<<n<<"th Fibonacci number : "<<Fibonacci(n);
    
    return 0;
}
