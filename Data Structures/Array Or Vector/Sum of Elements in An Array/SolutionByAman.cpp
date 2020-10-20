#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, a[20];
	cin>>n;
	
	int i;
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	
	int s=0;
	for(i=0; i<n; i++){
		s+=a[i];
	}
	cout<<s;
	return 0;
}
