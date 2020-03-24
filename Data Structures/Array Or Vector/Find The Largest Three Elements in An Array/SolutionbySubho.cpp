#include<bits/stdc++.h>
using namespace std;
int *LargestThreeElements(int input[],int n){
    sort(input,input+n,greater<int>());
    int *arr=new int[3];
    for(int i=0;i<3;i++)
{
    arr[i]=input[i];
}
return arr;
    
}
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
int *input=new int[n];
cout<<"Enter array elements"<<endl;
for(int i=0;i<n;i++){
    cin>>input[i];
}
int *ans=LargestThreeElements(input,n);
cout<<"Largest Three Elements"<<endl;
for(int i=0;i<3;i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
delete []ans;
delete []input;
    return 0;
}
