/*
    Program Description - program to find the maximum element of array
    Function Name : finding_the_largest_element(int*,int) -- return type int  
*/

#include <iostream>

using namespace std;

int finding_the_largest_element(int* num_arr, int size){
    int max=0;
    for(int i=0;i<size;++i){
        if(num_arr[i]>max){
            max = num_arr[i];
        }
    }

    return max;
}

int main(){

    unsigned int size=0;
    int num=0;
    cout << "Size : ";
    cin >> size ;

    int* number_array = new int[size];

    for(int i=0;i<size;++i){
        cout << "N : ";
        cin >> num;
        number_array[i]=num;
    }

    cout << "Largest element : " << finding_the_largest_element(number_array,size) << endl;
    delete [] number_array;
}
