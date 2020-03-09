/*
  Program Description - This program to check whether it's is Vowel or Consonant.    
*/

#include <iostream>

using namespace std;

void check_for_vowel_or_consonant(char ch)
{
    int lower_check=0, upper_check=0;
    lower_check = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    upper_check = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if(lower_check||upper_check)
        cout << "Output = Vowel"<< endl;
    else 
        cout << "Output = consonant"<< endl; 
}

int main()
{
    char ch = 'a';
    ch = getchar();
    check_for_vowel_or_consonant(ch);   
    
}
