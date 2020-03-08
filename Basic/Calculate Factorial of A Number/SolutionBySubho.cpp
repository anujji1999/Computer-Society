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
    cout<<"Enter number"<<endl;
    cin>>n;
    if(n<0)
    {
        cout<<"Enter positive number"<<endl;
    }
   else{ 
       cout<<"Factorial of "<<n<<":"<<factorialUsingRecursion(n)<<endl;
   }
    return 0;
}
