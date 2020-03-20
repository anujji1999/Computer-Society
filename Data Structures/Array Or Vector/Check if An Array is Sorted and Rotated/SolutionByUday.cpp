/*
    Program Description - program to check array is sorted and rotate
    Function Name : sort_and_rotate_check(int*,int) -- return type bool
  
*/

#include <iostream>

using namespace std;

bool sort_and_rotate_check(int* arr, int size) 
{ 
    int minEle = arr[0]; 
    int index_of_small = -1,flag1 = 1,flag2 = 1; 
  
    // to find the smallest element in the array
    for (int i = 0; i < size; i++) { 
        if (arr[i] < minEle) { 
            minEle = arr[i]; 
            index_of_small = i; 
        } 
    } 
        
    if(index_of_small==-1){
        return 0;
    }

    // Check check sort before the minimum element 
    for (int i = 1; i < index_of_small; ++i) { 
        if (arr[i] < arr[i-1]) { 
            flag1 = 0; 
            break; 
        } 
    } 
 
    //Check check sort before the minimum element 
    for (int i = index_of_small+1; i < size; ++i) { 
        if (arr[i] < arr[i-1]) { 
            flag2 = 0; 
            break; 
        } 
    } 
 
    if (flag1 && flag2 && (arr[size-1] < arr[index_of_small-1])) 
        return 1;
    else
        return 0;
} 

int main()
{
    unsigned int size=0, num=0;
    cout << "Size : ";
    cin >> size;
    int* number_array = new int[size];
    for(int i=0;i<size;++i)
    {
        cout << "N : ";
        cin >> num;
        number_array[i]=num;
    }
    // calling the sort and rotate check function
    bool answer = sort_and_rotate_check(number_array, size); 

    if(answer)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
        
}

