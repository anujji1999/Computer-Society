/*
    Program Description - program to find smallest missing number
    Function Name : finding_the_smallest_element(int*,int ,int) -- return type int  
*/

#include <iostream>

using namespace std;

int smallest_missing_number(int* numarr,int m,int size){
    int i=0;
    for(i=0;i<size;++i){
        if(numarr[i]!=i){
            if(i<m){
                return i;
            }
        }
    }
    return i;

}

int main(){

    unsigned int size =0, m=0;
    int num=0;
    cout << "Size : ";
    cin >> size;
    cout << "M : ";
    cin>>m;
    int* numarr = new int[size];
    for(int i=0;i<size;++i){
        cout<<"N : ";
        cin >> num;
        numarr[i]=num;
    }
    int answer = smallest_missing_number(numarr,m,size);
    if(answer==-1){
        cout<< "no item missing" << endl;
    }
    else{
        cout<< "missing : " << answer << endl;
    }

    delete [] numarr;

}
