/*
  Program Description - program to check if string is only number 
  Solution Description: taking input as string type and checking each character from ascii table
  Function Name : check_if_string_is_only_number(string) -- return type bool
  
*/

#include <iostream>
#include <string.h>

using namespace std;

bool check_if_string_is_only_number(string input_string)
{
    int len=0;
    for(int i=0;input_string[i]!='\0';++i){
        if(!(input_string[i]>=48&&input_string[i]<=57))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string input_string;
    cout << "input : " <<endl;
    getline(cin,input_string);

    bool answer = check_if_string_is_only_number(input_string);
    if(answer)
        cout << "output = YES" << endl;
    else
        cout << "output = NO" << endl;

}

