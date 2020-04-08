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

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll second_largest=-1,largest=-1;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        } else
        if(arr[i]>second_largest && arr[i]!=largest)
            second_largest=arr[i];
    }

    if(second_largest==-1)
        cout<<"All elements in the array are equal\n";
    else
    cout<<second_largest<<"\n";
    return 0;
}