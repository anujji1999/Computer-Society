/*
    Program Description program to reverse the given array
    function : reverse_of_array(int*,int) | return type void
*/
#include <iostream>

using namespace std;

void reverse_of_array(int* numarr, int size){

    int temp=0;
    for(int i=0;i<size/2;++i){
        temp = numarr[size-i-1];
        numarr[size-i-1] = numarr[i];
        numarr[i]=temp;
    }

}

int main(){
    unsigned int size=0;

    cout<< "Size : ";
    cin >> size;

    int* numarr = new int[size];
    for(int i=0;i<size;++i){
        cout<< "N : ";
        cin >> numarr[i];
    }

    reverse_of_array(numarr,size);

    for(int i=0;i<size;++i){
        cout<< numarr[i] << " ";
    }
    cout<<endl;
    delete [] numarr;

}
