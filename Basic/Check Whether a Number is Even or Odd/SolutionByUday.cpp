/*
  Program Description - This prgram check whether number is even or odd
  Time Complexity: O(n)
  Solution Description: By extracting the last digit of a number to check for even or odd
  ex : check : 497
  1. divide by 10 , answer = 49
  2. multiply by 10 = 490
  3. check - answer = 497 - 490 = 7
  then checking from even or odd array

Functions Used : check_even_or_odd_without_mod(void)
               : final_check(void)

*/

#include <iostream>
#include <math.h>

using namespace std;

// function to check for even or odd
void final_check (int n)
{
    int even_array[5] = {0,2,4,6,8};
    int odd_array[5] = {1,3,5,7,9};
    int flag = 0;

    for( int i =0 ; i<5 ; ++i )
    {
        if(n == even_array[i]){
            cout << "Output = EVEN" << endl;
            break;
        }
        else if(n == odd_array[i]){
            cout << "Output = ODD" << endl;
            break;
        }
    }
}

// function to process before checking
void check_even_or_odd_without_mod (unsigned int n)
{

    if ( n<10 ){        // for numbers < 10
        final_check(n);
        return;
    }

    int last_digit = 0;
    last_digit = n-ceil(n/10)*10;       // main login
    final_check(last_digit);
}

int main()
{
    unsigned int n=0;
    cout << "N = ";
    cin>>n;
    check_even_or_odd_without_mod(n);
}
