/*
            ***************************************************
                        AUTHOR : VIPUL SHARMA                       
            ***************************************************
            ***************************************************
                        Username :  vipulsnp
            ***************************************************
            ***************************************************
*/      

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
#define ll long long
using namespace std;

int main() 
{
	fast
	ll n;
	cin>>n;
	ll arr[n];
	
	for(ll i=0;i<n;i++)
	cin>>arr[i];
	
	for(ll i=0;i<n/2;i++)
	{
	    ll temp=arr[i];
	    arr[i]=arr[n-i-1];
	    arr[n-i-1]=temp;
	}
	
	for(ll i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<"\n";
	  
	return 0;
}
