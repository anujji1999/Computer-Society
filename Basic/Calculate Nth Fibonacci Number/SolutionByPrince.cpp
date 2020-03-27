#include<iostream>
using namespace std;


int main(){
  int n;
    cin>>n;
    int a=0,b=1;
    if(n==0)
        cout<<"0";
    else if(n==1)
        cout<<"1";
    else{
    for(int i=3;i<=n;i++)
    {
        int c=a+b;
        a=b;
        b=c;
        }
    cout<<b;
    }
    return 0;

}

