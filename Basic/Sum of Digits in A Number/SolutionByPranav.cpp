#include <iostream>

using namespace std;

int main()
{
    int sum=0; int num;
    cout<<"Input = ";
    cin>>num;
    while(num!=0)
    {
        sum+=num%10;
        num/=10;
    }
    cout<<"\nOutput = "<<sum;
    return 0;
}
