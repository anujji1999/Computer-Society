#include <iostream>

using namespace std;

int main()
{
    long long num; int p=0;
    cout<<"N = ";
    cin>>num;
    while(num!=0)
    {
        num=num/10;
        p++;
    }
    cout<<"\nOutput = "<<p;
    return 0;
}
