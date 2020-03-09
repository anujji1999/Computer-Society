/*
    Program Description - program to count length of a string
    Function Name : length_of_string(string) -- return type int
  
*/

#include <iostream>
#include <string.h>

using namespace std;

int length_of_string(string input_string)
{
    int length = 0;
    for(int i=0; input_string[i]!='\0' ; ++i)   
        ++length;
    
    return length;    
}

int main()
{
    string input_string;
    cout << "Enter string : ";
    getline(cin,input_string);
    int answer = length_of_string(input_string);
    cout << "Length = " << answer <<endl;
}
