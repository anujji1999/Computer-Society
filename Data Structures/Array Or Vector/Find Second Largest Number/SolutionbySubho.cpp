#include<iostream>
using namespace std;

int firstMax(int *arr,int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

    }
      return max;
}
int secondMax(int*arr,int n,const int first_maximum)
{
    int second_maximum;
if(arr[0]!=first_maximum)
{
    second_maximum=arr[0];
}
else{second_maximum=arr[1];
}
  for(int i=1;i<n;i++)
    {
        if(arr[i]>second_maximum&&arr[i]!=first_maximum)
        {
            second_maximum=arr[i];
        }

    }
    return second_maximum;
}
int main()
{
int n;
cout<<"Enter the number of elements"<<endl;
cin>>n;
cout<<"Enter array elements"<<endl;
int *arr=new int[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int first_maximum=firstMax(arr,n);
cout<<"Second maximum element:"<<secondMax(arr,n,first_maximum)<<endl;

    return 0;
}
