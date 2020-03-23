#include<iostream>
using namespace std;
int main()
{
    long n;
    cout << " N = ";
    cin >> n;
    cout <<endl<<" Factors = ";
    for(int i = 1; i <= n; ++i)
    {
        if(n % i == 0)
            cout << i << " , " ;
    }
}
