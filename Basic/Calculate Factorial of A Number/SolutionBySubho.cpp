#include<iostream>
using namespace std;
int factorialUsingRecursion(int number)
{
    
    if(number==0)
    {
        return 1;
    }
    
    return number*factorialUsingRecursion(number-1);
}

int main()
{   int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<":"<<factorialUsingRecursion(n)<<endl;
    return 0;
}
