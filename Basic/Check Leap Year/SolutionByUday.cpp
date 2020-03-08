/*
  Program Description - This program to check leap year
  Time Complexity: O(1)
   
*/

#include <iostream>

using namespace std;

int main()
{
    unsigned int year = 0;
    cout << "input = " ;
    cin >> year ;
    if (year % 4 == 0)
        cout << "output = yes" << endl;
    else
        cout << "output = no" << endl;

}
