/*
# A positive number N is given to you and You need to calculate its factorial.

```
  N = 4
  Output = 24
  
  N = 6
  Output = 720
```
*/

#include <iostream>
#define ll long long int

using namespace std;

ll factorial (int n){
    ll fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;

}

int main () {
    int n; cin >> n; // input a positive integer  n
    cout << factorial(n);
}