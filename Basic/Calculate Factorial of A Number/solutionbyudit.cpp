#include<iostream.h>

//function for calculating factorial
int factorial(int n)
{
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);
}

\\main function
int main()
{
	int n,answer;
	cout<<"N=";
	cin>>n;
	if(n==0)
		cout<<"Output = 1";
	else
	{
		answer=factorial(n);
		cout<<"Output = "<<answer<<endl;
	}
	return 0;

}
