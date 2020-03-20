/*
    Program Description - program to find smallest missing number
    Function Name : missing_number(int*,int) -- return type int  
*/
#include <iostream>

using namespace std;

int missing_number(int* arr,int size){

    int total = (size + 1) * (size + 2) / 2; 
    for (int i = 0; i < size; i++) 
        total -= arr[i]; 
    return total;

}

int main(){
    unsigned int size=0,num=1;
    cout<< "Size :" ;
    cin >> size;

    int* numarr = new int[size];

    for(int i=0;i<size;++i){
        cout << "N : ";
        cin >> num;
        numarr[i]=num;
    }

    int answer = missing_number(numarr,size);
    cout << "Missing : " << answer;

    delete [] numarr;


}
