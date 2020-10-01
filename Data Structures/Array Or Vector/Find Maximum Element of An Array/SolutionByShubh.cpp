#include<iostream>
using namespace std;


int main() {
    int size,max;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++) {
        cin>>arr[i];
        if(i==0) {
            max = arr[i];
        }
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    cout<<max;
    return 0;
}
