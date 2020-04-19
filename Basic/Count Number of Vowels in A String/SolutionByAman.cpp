#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
	// your code goes here
	string s;
	cin>>s;
	int n=s.length();
	int count=0;
	for(int i=0;i<n;i++)
	{
		if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u') )
		{
			count+=1;
		}
		else if((s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
		{
			count+=1;
		}
	}
	cout<<"no. of vowels are "<<count;
 
 
	return 0;
}
