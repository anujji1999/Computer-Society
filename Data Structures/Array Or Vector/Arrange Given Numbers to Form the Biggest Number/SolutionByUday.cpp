/*
    Program to create the biggest possible number out of the given array
    Function Name : 
        1.  largest_number_possible(int*, int ) -- return type void
        2.  compare(int, int) -- return type int
    Solution Description: sorting the array with the condition that "a[i]a[j]" < "a[j]a[i]"
  
*/

#include<iostream>

using namespace std;

int compare(int a, int b)
{
    int multiplier=10;
    while(b>=multiplier)
        multiplier*=10;
    return a*multiplier+b; 
}

void largest_number_possible(int* num_arr, int size)
{

    for(int i=0;i<size-1;i++)
        for(int j=i+1;j<size;j++)
            if(compare(num_arr[i],num_arr[j])<compare(num_arr[j],num_arr[i]))
            {
                num_arr[i] = num_arr[i]+num_arr[j];
                num_arr[j] = num_arr[i]-num_arr[j];
                num_arr[i] = num_arr[i]-num_arr[j];
            }    
    
    for(int i=0;i<size-1;i++){
        cout << num_arr[i];
    }
    cout << endl; 
}

int main()
{            
    unsigned int size=0, num=0;
    cout << "Size : ";
    cin >> size ;    
    int* number_array = new int[size];
    for(int i=0;i<size;++i){
        cout << "n : ";
        cin >> num;
        number_array[i] = num;
    }
    largest_number_possible(number_array,size);      
    
}
