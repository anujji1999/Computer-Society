/*
    Program Description - program to count the number of smaller elements on right
    Function Name : count_the_number_of_smaller_elements_on_right(int*,int *,int) -- return type void  
*/

#include <iostream>

using namespace std;

void count_the_number_of_smaller_elements_on_right(int* numarr,int* countarr, int size){

    int count;
    for(int i=0;i<size;++i){
        count=0;
        for(int j=i+1; j<size;++j){
            if(numarr[i]>numarr[j]){
                ++count;
            }
        }
        countarr[i]=count;
    }
}

int main()
{
    unsigned int size=0;
    int num=0;
    cout << "Size : ";
    cin >> size;
    int* numarr = new int[size];
    int* countarr = new int[size];

    for(int i=0;i<size;++i){
        cout<< "N : ";
        cin >> num;
        numarr[i]=num;
    }
    count_the_number_of_smaller_elements_on_right(numarr,countarr,size);

    for(int i=0;i<size;++i){
        cout << countarr[i] << " ";
    }
    cout << endl;

    delete [] numarr;
    delete [] countarr;

}
