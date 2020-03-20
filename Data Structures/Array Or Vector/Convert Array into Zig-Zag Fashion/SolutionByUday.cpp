/*
    Program Description - program make an an array in zig zag shape
    Function Name : convert_zig_zag_function(int*,int) -- return type void  
*/
#include <iostream>

using namespace std;

void convert_zig_zag_function(int* numarr, int size){

    for(int i=0; i<size-1;++i){
        if(i%2==0){
            if(numarr[i]>numarr[i+1]){
                numarr[i]=numarr[i]+numarr[i+1];
                numarr[i+1]=numarr[i]-numarr[i+1];
                numarr[i]=numarr[i]-numarr[i+1];                
            }
        }
        else{
            if(numarr[i]<numarr[i+1]){
                numarr[i]=numarr[i]+numarr[i+1];
                numarr[i+1]=numarr[i]-numarr[i+1];
                numarr[i]=numarr[i]-numarr[i+1];
            }
        }
    }
}

int main(){
    unsigned int size=0;
    int num=0;
    cout << "Size : ";
    cin >> size;
    int* number_array = new int[size];

    for(int i=0;i<size;++i){
        cout << "N : ";
        cin >> num;
        number_array[i]=num;
    }

    convert_zig_zag_function(number_array,size);

    for(int i=0;i<size;++i){
        cout << number_array[i] << " ";
    }

    cout << endl;
    delete [] number_array;
}
