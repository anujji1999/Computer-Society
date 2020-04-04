#include<iostream>
using namespace std;
int factorial(int n) {
    if(n==0)
        return 1;
    int ans = factorial(n-1)*n;
    return ans;
}
int main(){
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
