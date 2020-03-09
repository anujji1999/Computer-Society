/*
    Program Description - program to Count Number of Digits in An Integer.
    Solution Description: Using log base 10 of any number , the leading digit tells how many digits are in it
    Function Name : count_the_number_of_digits_in_integer(long long) -- return type int
  
*/


#include <iostream>
#include <math.h>

using namespace std;

//function to count the number of digits using log base 10
int count_the_number_of_digits_in_integer(long long n)
{
    return ceil(log10(n));
}

int main()
{
    long long n=0;
    int answer = 0;
    cout << "N = ";
    cin >> n;
    
    answer = count_the_number_of_digits_in_integer(n);
    cout << "Output = " << answer << endl;

}
