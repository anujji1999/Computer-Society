/*
    Program Description - program to Count the number of vowels in string
    Function Name : count_number_of_vowels_in_string(string) -- return type int
  
*/

#include <iostream>
#include <string.h>

using namespace std;

int count_number_of_vowels_in_string(string input_string)
{
    int length = 0;
    for(int i=0; input_string[i]!='\0';++i)
    {
        if ( (input_string[i]=='a') ||
             (input_string[i]=='e') ||
             (input_string[i]=='i') ||
             (input_string[i]=='o') ||
             (input_string[i]=='u') ||
             (input_string[i]=='A') ||
             (input_string[i]=='E') ||
             (input_string[i]=='I') ||
             (input_string[i]=='O') ||
             (input_string[i]=='U')){
                 ++length;
             }
    }
    return length;
}

int main()
{
    string input_string;
    cout << "string  = ";
    getline(cin,input_string);
    cout << "output = " << count_number_of_vowels_in_string(input_string) << endl;    

}
