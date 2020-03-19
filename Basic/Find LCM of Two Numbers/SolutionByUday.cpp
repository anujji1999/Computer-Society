/*
    Program Description program to find the lcm of two given number
    Function Name : lcm_of_two_numbers(int,int) -- return type int
    Solution : using lcm(a,b)  = (a*b)/gcd(a,b)
  
*/

#include <iostream>

using namespace std;

int lcm_of_two_numbers(unsigned int x, unsigned int y)
{
    int gcd =0, lcm;
    int big = (x>y)? y : x;

    for(int i=1; i<= big; ++i)
    {
        if((x%i==0)&&(y%i==0))
            gcd = i;
    }

    lcm = (x*y)/gcd;

    return lcm;
}

int main()
{
    unsigned int firstnum=0 , secondnum=0;
    cout << "X = ";
    cin >> firstnum;
    cout << "Y = ";
    cin >> secondnum;

    cout << "output = " << lcm_of_two_numbers(firstnum,secondnum) << endl;   

}
