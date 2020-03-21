#include<iostream>
using namespace std;
void helperSearchElement(int*arr,int sI,int eI,int searchEl)
{ 
   
    while(sI<=eI)
    {int mid=(sI+eI)/2;
        if(arr[mid]==searchEl)
        {
            cout<<"YES"<<endl;
            return;
        }
        if(arr[mid]>searchEl)
        {
           eI=mid;
           sI=sI;
        }
        if(arr[mid]<searchEl)
        {
            sI=mid+1;
            eI=eI;
        }
        
    }
    cout<<"NO"<<endl;
    return;
}
void searchElement(int *arr,int n,int searchEl)
{
    helperSearchElement(arr,0,n-1,searchEl);
}

int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int*arr=new int[n];
    cout<<"Enter sorted array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int searchEl;
    cout<<"Enter the searching element"<<endl;
    cin>>searchEl;
    searchElement(arr,n,searchEl);
    delete []arr;
    return 0;
}
