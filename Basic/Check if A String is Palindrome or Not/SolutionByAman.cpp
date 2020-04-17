#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
	// your code goes here
	string s;
	cin>>s;
	int n=s.length();
 
	int flag=0;
	for(int i=0;i<=n;i++)
 
    {
		if(s[i]==s[n-1-i])
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"given string is palindrome";
	}
	else
	{
		cout<<"given string is not palindrome";
	}
	return 0;
}
