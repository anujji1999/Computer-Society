#include <bits/stdc++.h>
using namespace std; 
#define ll long long
bool checkLeapYear(ll year) 
{  
	if (year % 400 == 0 ||  (year%100 !=0 && year%4==0)) 
		return true; 

	return false; 
} 
 
int main() 
{ 
	ll year;
    cin>>year; 

    if(checkLeapYear)
        cout<<"Yes\n";
    else
        cout<<"No\n";

    return 0; 
} 