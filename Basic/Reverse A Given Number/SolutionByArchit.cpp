#include<bits/stdc++.h>
using namespace std;



int main()
{

    int a;
    cin>>a;
   
    int b=0;
    while(a!=0){
        int r=a%10;
        b=(b*10)+r;
        a/=10;


    }
    cout<<b;
}
