#include<iostream>
using namespace std;

int main() 
{
	int N;
	cout << "N = ";
	cin >> N;
	
	//loop to reduce it to check even or odd
	while(N>1)
	{
		N = N-2;
	}
	
	if(N==0)
		cout<<"\nOutput = EVEN"<<endl;
	else
		cout<<"\nOutput = ODD"<<endl;

	return 0;
}
