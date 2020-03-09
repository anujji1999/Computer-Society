/*
    Program Description program to find the reverse of a number
    function : reverse_of_a_number(long) | return type long
*/

#include <bits/stdc++.h>

using namespace std;

long reverse_of_a_number(long number)
{
    long reverse=0,temp=0;
    while(number!=0)
    {
        temp = (number%10);
        reverse = reverse*10 + temp;
        number = number/10;
    }
    return reverse;
}

int main()
{
    long number;
    cout << "input = ";
    cin >> number;
    cout << "output = " << reverse_of_a_number(number) << endl;
    
}
