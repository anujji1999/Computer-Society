#include<bits/stdc++.h> 

using namespace std; 

int main() 
{ 
    int num,rev;
    cout<<"Input = ";
    cin>>num;
    while(num!=0)
    {
        rev = rev*10 + num%10;
        num /= 10;
    }
    cout<<"\nOutput = "<<rev;
    return 0; 
}
