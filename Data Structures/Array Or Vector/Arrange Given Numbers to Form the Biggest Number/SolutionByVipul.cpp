/*
    Author : Vipul Sharma
    handle: vipulsnp
    License: MIT

*/

/*
        Arrange the numbers to form the maximum number possible
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool custom(ll x,ll y)
{
    ll d1=log10(x)+1,d2=log10(y)+1;

    return ( (x*pow(10,d2)+y) > (y*pow(10,d1)+x) ? true : false);
}


int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n,custom );
    for(ll i=0;i<n;i++)
        cout<<arr[i];
    cout<<"\n";
    return 0;
}