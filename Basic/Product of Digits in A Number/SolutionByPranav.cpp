#include <iostream>

using namespace std;

int main()
{
    int prod=1; int num;
    cout<<"Input = ";
    cin>>num;
    while(num!=0)
    {
        prod*=num%10;
        num/=10;
    }
    cout<<"\nOutput = "<<prod;
    return 0;
}
