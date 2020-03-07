#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fib(ll n, ll dp[]) {
    if(n == 0) {
        dp[0] = 0;
        return 0;
    }
    if(n == 1) {
        dp[1] = 1;
        return 1;
    }
    if(dp[n] > 0)
        return dp[n];
    int ans =  fib(n-1, dp) + fib(n-2, dp);
    dp[n] = ans;
    return ans;
}

int main() {
    ll n;
    cin>>n;
    ll dp[n + 1];
    memset(dp,0,(n+1)*sizeof(ll));
    cout<<fib(n-1, dp)<<endl;
    return 0;
}
