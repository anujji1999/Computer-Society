#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    unsigned long long factorial = 1;
    cout << "N = " ;
    cin >> n;
    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }
    cout << "Output = " << factorial;    
  
    return 0;
}
