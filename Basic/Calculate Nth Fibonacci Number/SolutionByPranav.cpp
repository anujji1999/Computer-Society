//Using Recursion
#include <iostream>
using namespace std;

int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2); 
} 
  
int main () 
{ 
    int n = 0;
    cout << "N = ";
    cin >> n;
    cout << "Output = " << fib(n-1); 
    return 0; 
} 
