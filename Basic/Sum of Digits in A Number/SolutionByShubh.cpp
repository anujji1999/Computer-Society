#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,dup;  //number 
    cin>>n;
    dup=n;
    long long sum=0;   //sum of the numbers.
    while(n) {
        sum+=n%10;
        n/=10;
    }
    cout<<"Input = "<<dup<<endl;
    cout<<"Output = "<<sum<<endl;
return 0;
}
