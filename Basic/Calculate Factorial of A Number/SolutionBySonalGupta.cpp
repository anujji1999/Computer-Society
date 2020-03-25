#include <iostream>
using namespace std;

int factorial(int n){
	if(n == 1){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int ans = factorial(n);
	cout<<"Output = "<<ans<<endl;
	return 0;
}
