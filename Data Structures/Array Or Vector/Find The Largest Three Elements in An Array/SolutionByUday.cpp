/*
    Program Description - program to find largest three number
    Function Name : finding_the_smallest_element(int*,int) -- return type int  
*/

#include <iostream>
#include <climits>

using namespace std;

int* largest_three_element(int* numarr,int size){
    
    int* container = new int[3];
    container[0] = container[1] = container[2] = INT_MIN;

    for (int i = 0; i<size; ++i){
        if (numarr[i] > container[0]){
            container[2] = container[1];
            container[1] = container[0];
            container[0] = numarr[i];
        }
        else if (numarr[i] > container[1]){
            container[2] = container[1];
            container[1] = numarr[i];
        }  
        else if (numarr[i] > container[2])
            container[2] = numarr[i];
    }

    return container;
}

int main(){

    unsigned int size=0;
    int num=0;

    cout<< "Size : ";
    cin >> size ;

    if(size<3){
        cout<< "Size less than 3" << endl;
        return 0;
    }
    int* numarr = new int[size];
    

    for(int i=0;i<size;++i){
        cout << "N :";
        cin >> num;
        numarr[i]=num;
    }

    if (size==3){
        cout << "size=3 : " << endl;
        for(int i=0;i<size;++i){
            cout<< numarr[i] << " " ;                       
        }
        cout<< endl;
        return 0;
    }

    int* answer = largest_three_element(numarr,size);

    for(int i=0; i<3; i++){
		cout<<answer[i]<<" ";
	}
    cout<< endl;
    delete [] numarr;

}
