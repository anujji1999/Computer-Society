#include <iostream>
using namespace std;

string Vowels(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return "Vowel";
    }
    else
    {
        return "Consonant";
    }
}

int main()
{
    char c;
    cin >> c;
    cout << Vowels(c);
    return 0;
}
