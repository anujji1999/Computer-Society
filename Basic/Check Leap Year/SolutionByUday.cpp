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
    if((year%4==0) && (year%100!=0))
    {
      cout<<"yes";
    }    
    else if(year%400==0)
    {
      cout<<"Yes";
    }
    else
    {
      cout<<"No";
    }
	

}
