/*
    Program Description - program perform insertion sort on array
    Function Name : insertion_sort(int* ,int) -- return type void
*/
#include <iostream>

using namespace std;

void insertion_sort(int* numarr, int size){
    int key, temp;  
    for (int i = 1; i < size; i++) 
    {  
        key = numarr[i];  
        temp = i - 1;    
        while (temp >= 0 && numarr[temp] > key) {  
            numarr[temp + 1] = numarr[temp];  
            temp = temp - 1;  
        }  
        numarr[temp + 1] = key;  
    } 
    for (int i = 0; i < size; i++)  
        cout << numarr[i] << " "; 

    cout << endl; 
}

int main(){
    unsigned int size =0;
    int num=0;
    cout << "Size : ";
    cin >> size;
    
    int* numarr = new int[size];
    for(int i=0;i<size;++i){
        cout<<"N : ";
        cin >> num;
        numarr[i]=num;
    }
    insertion_sort(numarr,size);
}
