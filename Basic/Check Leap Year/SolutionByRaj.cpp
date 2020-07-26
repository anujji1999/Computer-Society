/*
An Year as input is given and You need to check 
that it's leap year or not.

input = 1997
output = No

input = 2004
output = Yes

*/

#include <iostream>
using namespace std;

int main () {
    int year; cin >> year;
    // if a year divides by 4 then leap year
    year % 4 == 0 ? cout << "Yes" << endl : cout << "No" << endl;
}
