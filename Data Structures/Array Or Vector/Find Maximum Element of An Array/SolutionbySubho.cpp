#include<iostream>
using namespace std;
int maximum(int*arr,int n){
    if(n==1)
    {
        return arr[0];
    }
    return max(arr[0],maximum(arr+1,n-1));
  

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
    return 0;
}
