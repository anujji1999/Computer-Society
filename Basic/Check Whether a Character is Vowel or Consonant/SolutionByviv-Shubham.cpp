#include<iostream>
using namespace std;
void check_for_vowel_or_consonant(char ch)
{
if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
        cout << "Output = Vowel"<< endl;}
    else 
        cout << "Output = consonant"<< endl;
}
int main()
{
    char ch;
    ch = getchar();
    check_for_vowel_or_consonant(ch);   
 return 0;   
}
