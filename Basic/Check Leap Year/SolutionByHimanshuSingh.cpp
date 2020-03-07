#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool checkLeap(int n) {
    if(n%4 == 0) {
        if(n%100 == 0) {
            if(n%400 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else
            return true;
    }
    else
        return false;
}

int main() {
    ll n;
    cin>>n;
    if(checkLeap(n))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
