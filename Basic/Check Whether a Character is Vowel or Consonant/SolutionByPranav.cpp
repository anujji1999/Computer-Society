#include <iostream>

using namespace std;

int main()
{
    char ch = 'a';
    ch = getchar();
    //check for vowel or consonant
    if((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') )
        cout << "\nOutput = Vowel";
    else
        cout << "\nOutput = Consonant";
    return 0;
}
