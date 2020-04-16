#include <iostream>
#include<cstring>

using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int flag=0;
	for(int i=0;i<s.length();i++)
	{
		if(isdigit(s[i])!=0)
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		cout<<"string contains only digits";
	}
	else
	{
		cout<<"it also contains some character";
	}
	return 0;
}
