/*
    Program to sort array using bubble sort
    Function Name : 
        1.  bubble_sort(int*, int ) -- return type void

    Solution Description: sorting an array using bubble sort
  
*/


#include <iostream>

using namespace std;

void bubble_sort(int* numarr, int size)
{
    for(int i=0;i<size;++i){
        for(int j=0;j<size-1-i;++j){
            if(numarr[j]>numarr[j+1]){
                numarr[j]=numarr[j]+numarr[j+1];
                numarr[j+1]=numarr[j]-numarr[j+1];
                numarr[j]=numarr[j]-numarr[j+1];
            }
        }
    }
}

int main()
{
    unsigned int size=0, num=0;
    cout << "Size : ";
    cin >> size;
    int* numarr = new int[size];

    for(int i=0; i<size; ++i)
    {
        cout << "N : ";
        cin >> num;
        numarr[i] = num;
    }

    bubble_sort(numarr,size);

    for(int i=0;i<size;++i){
        cout << numarr[i] << " ";
    }
    cout << endl;
    
    delete [] numarr;
            
}
