/*
    Program Description program to find the product of digits of number
    Function Name : product_of_digits_of_a_number(string) -- return type int
*/

#include <iostream>
#include <string>

using namespace std;

int product_of_digits_of_a_number(string number_string)
{
    int product = 1;
    for(int i=0; number_string[i]!= '\0'; ++i)
    {
        if(((int)number_string[i]-48)==0){
            continue;
        }            
        else
        {
            product = product*(int)(number_string[i]-48);
        }
    }
    return product;
}

int main()
{
    string number_string;
    cout << "Input = " ;
    getline(cin,number_string);    
    cout << "output = " << product_of_digits_of_a_number(number_string) << endl;    
}
