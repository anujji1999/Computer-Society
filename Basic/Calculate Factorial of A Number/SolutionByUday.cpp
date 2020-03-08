/*
  Program Description - This prgram to find factorial of a number
  Time Complexity: O(n)
  Solution Description: Using recursion to find the factorial of a number
Function Name : factorial_using_recursion(int) -- return type int
  
*/

#include <iostream>

using namespace std;

// function to calculate factorial using recursion
int factorial_using_recursion(int n)
{
    if(n==1){
        return 1;       
    }
    
    // calling the same function but with n-1 as arguments
    return n*factorial_using_recursion(n-1);

}

int main()
{
    unsigned int n=0, answer = 0;
    
    cout << "N = ";
    cin>>n;
    if(n==0){                       // factorial of 0 is 1
        cout << "Output = 1" <<endl;
        exit(-1);
    }
    else {
        answer = factorial_using_recursion(n);      // calling the factorial function
    }
    cout << "Output = " << answer << endl;


}
