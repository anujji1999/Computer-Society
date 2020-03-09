#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;
//condition for leap year test
    if((year%4==0)&&(year%100!=0)||(year%400==0))
        cout <<"Yes";
    else
        cout <<"No";
    return 0;
}
