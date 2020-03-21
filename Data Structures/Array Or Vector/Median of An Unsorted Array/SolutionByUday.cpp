/*
    Program to find median of sorted array
    Function Name : median_of_unsorted_array(int*, int ) -- return type float
    Solution Description: sorting the array first and then finding it's median
    sorting used : bubble sort
  
*/

#include <iostream>

using namespace std;

float median_of_unsorted_array(int* numarr,int size){

    for(int i=0; i<size;++i){
        for(int j=0;j<size-1-i;++j){
            if(numarr[j]>numarr[j+1]){
                numarr[j]=numarr[j]+numarr[j+1];
                numarr[j+1]=numarr[j]-numarr[j+1];
                numarr[j]=numarr[j]-numarr[j+1];
            }
        }
    }
    float temp=0.0;

    if(size%2==0){
        size -= 1;
        temp = (numarr[size/2]+numarr[size/2+1])/2.0;        
        return temp;
    }
    else{
        size -= 1;
        temp =  numarr[(size+1)/2];
        return temp;
    }

}

int main(){
    unsigned int size=0;
    cout<< "Size :";
    cin >> size;

    int* numarr = new int[size];
    for(int i=0; i<size; ++i){
        cout<< "N : ";
        cin >> numarr[i];
    }

    float median = median_of_unsorted_array(numarr,size);
    cout << "Median : " << median << endl;
    delete [] numarr;

}
