#include<iostream>
using namespace std;
int maximum(int*arr,int n){
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
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum element"<<" "<<maximum(arr,n)<<endl;
    delete []arr;
    return 0;
}
