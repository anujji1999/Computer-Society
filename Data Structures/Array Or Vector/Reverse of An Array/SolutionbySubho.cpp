#include<iostream>
using namespace std;

void helper_reverse_array_using_original(int *arr,int firstIndex,int lastIndex)
{int size=lastIndex+1;
    if(firstIndex>lastIndex)
    {
        return;
    }
    int temp=arr[firstIndex];
    arr[firstIndex]=arr[lastIndex];
    arr[lastIndex]=temp;
    
    helper_reverse_array_using_original(arr,firstIndex+1,lastIndex-1);
   
    return;
}

void reverse_array_using_original(int*arr,int n)
{
    helper_reverse_array_using_original(arr,0,n-1);
}

int main()
{int n;
cout<<"Enter the number of  elements"<<endl;
cin>>n;
int*arr =new int[n];
cout<<"Enter the elements"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
 reverse_array_using_original(arr,n);
  cout<<"Reversed Array"<<endl;
   for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
    return 0;
}
