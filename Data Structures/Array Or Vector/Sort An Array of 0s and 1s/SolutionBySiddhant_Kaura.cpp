#include <iostream>
using namespace std;

void sort_01(int * arr,int size_of_arr){
    int lowptr = 0,highptr = size_of_arr - 1;
    while(lowptr < highptr){
        if(arr[lowptr] == 0){
            lowptr++;
        }
        if(arr[highptr] == 1){
            highptr--;
        }
        else{
             arr[lowptr] = 0;
             arr[highptr] = 1;
             highptr--;
             lowptr++;
        }
  }
}

int main() {
    int size_of_arr;
    cin >> size_of_arr;
    int arr[size_of_arr];
    for(int i = 0;i < size_of_arr;i++){
        cin >> arr[i];
    }
    sort_01(arr,size_of_arr);
    for(int i = 0;i < size_of_arr;i++){
        cout << arr[i] << " ";
    }
}
