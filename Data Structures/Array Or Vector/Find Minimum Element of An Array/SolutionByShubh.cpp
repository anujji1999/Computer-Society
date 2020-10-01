#include<iostream>
using namespace std;


int main() {
    int size,min;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++) {
        cin>>arr[i];
        if(i==0) {
            min = arr[i];
        }
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    cout<<min;
    return 0;
}
