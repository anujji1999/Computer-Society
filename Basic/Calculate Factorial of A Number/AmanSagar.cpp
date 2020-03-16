#include<iostream.h>
#include<conio.h>
int fact(int n)
{
		int f;
		if(n==0)
		{
			result=1;
		}
		else 
		{
			result=n*fact(n-1)
		}
		return result
}
void main()
{
	int n, factorial;
	cin>>n;
	factorial=fact(n);
	cout<<factorial;

}

