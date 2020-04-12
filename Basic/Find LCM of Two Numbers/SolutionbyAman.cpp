#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n1,n2;
	int lcm;
	cin>>n1>>n2;
	for(int i=2, j=2;;i++,j++)
	{
		if(i%n1==0 && j%n2==0)
		{
			lcm=i;
			break;
		}
	}
    cout<<lcm;
	return 0;
}
