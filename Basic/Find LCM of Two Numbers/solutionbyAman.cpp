#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n1, n2;
	cin>>n1>>n2;
	int i=2;
	int lcm=1;
	while(1)
	{
		if((n1%i==0)&&(n2%i==0))
		{
			n1=n1/i;
			n2=n2/i;
			lcm=lcm*i;
			i=i+1;
		}
		else
		{
			lcm=lcm*n1*n2;
			break;
		}
	}
	cout<<lcm;
	return 0;
}
