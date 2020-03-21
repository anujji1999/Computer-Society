#include<iostream>
using namespace std;
void find_element(int*arr,int n,int searchEl){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==searchEl)
        {
            cout<<"YES"<<endl;
           return;
        }
    }
    cout<<"NO"<<endl;
    return;
}
int main()
{
    int n;
    cout<<"Enter the size of element"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int searchEl;
cout<<"Enter Searching Element"<<endl;
cin>>searchEl;
find_element(arr,n,searchEl);
    return 0;
}
