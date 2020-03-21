#include<iostream>
using namespace std;
int missingNumber(int*arr,int n)
{if(n==1)
{
    return arr[0];
}
if(arr[1]!=arr[0]+1)
{
    return arr[0]+1;
}
else{
    return missingNumber(arr+1,n-1);
}
}
int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Missing number"<<":"<<missingNumber(arr,n)<<endl;
    return 0;
}
