#include<iostream.h>
#include<conio.h>
void main()
{
    int n, f=0,s=1, th;
    cin>>n;
    for(int i=2; i<n;i++)
    {
        th=f+s;
        f=s;
        s=th;
    }
    cout<<th;
}
