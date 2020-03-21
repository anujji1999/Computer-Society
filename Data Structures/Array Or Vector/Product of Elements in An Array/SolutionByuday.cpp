/*
    Program to find products of elements of array
    Function Name : products_of_elements_of_array(int*, int) -- return type int
      
*/

#include <iostream>

using namespace std;

int products_of_elements_of_array(int* numarr, int size){
    int product=1;
    for(int i=0;i<size;++i){
        product *= numarr[i];
    }
    return product;
}

int main(){
    
    unsigned int size=0;
    
    cout<< "Size :";
    cin>> size;

    int* numarr = new int[size];
    for(int i=0;i<size;++i){
        cout<< "N : ";
        cin>>numarr[i];
    }

    cout << "Product : " << products_of_elements_of_array(numarr,size) << endl;
    delete [] numarr;

}
