/*
# A positive number N is given to you and You need to calculate Nth Number in Fibonacci Series.

``
  N = 7
  Output = 8
  
  N = 4
  Output = 2
```

*/

#include <iostream>
#include <vector>

using namespace std;

int fibonacci (int n){

    vector<int> fibo(1000,0);  // to store Fibonacci numbers

    // Base case initalize
    // 1st fibonacci number is 0, second is 1
    fibo[0] = 0; fibo[1] = 1;

    // iterate to get rest of fibonacci numbers
    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    return fibo[n];

}

int main () {
    int n; cin >> n;
    cout << fibonacci(n-1); // 0, 1, 1, 2, 3 --> as First fibo is at 0th index for n=1, n always greater than 0.
}