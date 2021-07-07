#include<iostream>
using namespace std;
int main()
{
    int year;
    cout << "Input : ";
    cin >> year;
    if((year%4==0)&&(year%100!=0)||(year%400==0))
        cout<<endl<<"Yes";
    else
        cout<<endl<<"No";
    return 0;
}
