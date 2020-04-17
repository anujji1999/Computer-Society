#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int count=0;
	int i=0;
	while(s[i]!=0)
	{
		count++;
		i=i+1;
	}
	cout<<count;
	return 0;
}
