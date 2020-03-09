/*
  Program Description - This program checks whether number is prime or not using sieve of eratosthenes
  Solution Description: check for divisibilty of number n from 2 to n/2
  if no number is divisble then its prime
  else no
Function Name : bool sieve_of_eratosthenes(unsigned int n) -- return type bool

*/

#include <iostream>

using namespace std;

bool sieve_of_eratosthenes(unsigned int n)
{
    int i=2;
    while(i<=n/2){
        if (n%i==0){
            return false;
        }
        ++i;
    }
    return true;
}

int main()
{
    unsigned int n;
    cout << "N = ";
    cin >> n;
    if(n<2){
        cout << "Number less than 2" <<endl;
        return 0;
    }

    bool answer = sieve_of_eratosthenes(n);

    if(answer)
        cout << "Output = Yes" << endl;
    else
        cout << "Output = No" << endl;


}
