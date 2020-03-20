/*
    Program Description - program to find the minimum element of array
    Function Name : finding_the_smallest_element(int*,int) -- return type int  
*/

#include <iostream>
#include <climits>


using namespace std;

int finding_the_smallest_element(int* num_arr, int size){
    int min=INT_MAX;

    for(int i=0;i<size;++i){
        if(num_arr[i]<min){
            min = num_arr[i];
        }
    }

    return min;
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

    cout << "Smallest element : " << finding_the_smallest_element(number_array,size) << endl;
    delete [] number_array;
}
