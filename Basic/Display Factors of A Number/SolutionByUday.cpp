/*
    Program Description - program to display factors of a number 
*/

#include <iostream>

using namespace std;

int main()
{
    long number;

    cout << "N = ";
    cin >> number;

    cout << "output = ";
    for(int factor = 1; factor <= number; ++factor)
    {
        if(number % factor == 0)
            cout << factor << ", " ;
    }
    cout << endl;

    
}
