#include <iostream>
using namespace std;

int arraysum(int array[],int n){
int sum=0;

for(int i=0;i<n;i++){
    sum = sum + array[i];
    }
    cout<<sum<<endl;
}

int main(){
int array[100];

int n;
cin>>n;

for(int i=0;i<n;i++){
    cin>>array[i];
    }

  arraysum(array,n);
}
