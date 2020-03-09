/*
    Program Description program to find the gcd of two given number
    Function Name : gcd_of_two_numbers(int,int) -- return type int
  
*/

#include <iostream>

using namespace std;

int gcd_of_two_numbers(int x, int y)
{
    int gcd =0;
    int big = (x>y)? y : x;

    for(int i=1; i<= big; ++i)
    {
        if((x%i==0)&&(y%i==0))
            gcd = i;
    }
    return gcd;
    
}

int main()
{
    unsigned int first_num =0, second_num=0;
    cout << "X = ";
    cin >> first_num;
    cout << "Y = ";
    cin >> second_num;
    cout << "output = " << gcd_of_two_numbers(first_num,second_num) << endl;
       

}
