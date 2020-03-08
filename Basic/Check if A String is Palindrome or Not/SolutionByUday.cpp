/*
    Program Description - program to check whether given string is a palindrome
    Function Name : length_of_string(string) -- return type bool
  
*/

#include <iostream>
#include <string.h>

using namespace std;

bool check_for_palindrome(string input_string)
{
    int length = 0;
    for(int i=0; input_string[i]!='\0' ; ++i)   
        ++length;
    
    for (int i=0 ; i<length ; ++i){
        if(input_string[i]!=input_string[length-1-i])
            return false;
    }
    return true;
        
}

int main()
{
    string input_string;
    cout << "Enter string : ";
    getline(cin,input_string);
    bool answer = check_for_palindrome(input_string);
    if(answer)
        cout << "Yes" <<endl;
    else
        cout << "No" << endl;
}
