/*
    Program Description - program to find the second largest number
    Function Name : second_largest_number(int*,int) -- return type int  
*/

#include <iostream>

using namespace std;

int second_largest_number(int* numarr, int size){
    int largest=numarr[0],second_largest=0;
    for(int i=0;i<size;++i){
        if(numarr[i]>largest){
            second_largest = largest;
            largest = numarr[i];
        }
    }
    return second_largest;
}

int main(){
    
    unsigned int size=1;
    int num=0;

    cout<< "Size : ";
    cin >> size ;

    if(size==1){
        cout << "No Second Largest Number" << endl;
        return 0;
    }  

    int* numarr = new int[size];    

    for(int i=0;i<size;++i){
        cout << "N : ";
        cin >> num;
        numarr[i] = num;
    }

    cout << "Second largest : " << second_largest_number(numarr,size) << endl;

    delete [] numarr;

}
