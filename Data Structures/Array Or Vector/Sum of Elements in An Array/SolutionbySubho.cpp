#include<iostream>
using namespace std;
int Sum_of_array_elements(int*arr,int n){
    if(n==1)
    {
        return arr[0];
    }
    return arr[0]+Sum_of_array_elements(arr+1,n-1);
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
  cout<<"Sum of array elements:"<<Sum_of_array_elements(arr,n)<<endl;
  
    delete[]arr;
    return 0;
}
