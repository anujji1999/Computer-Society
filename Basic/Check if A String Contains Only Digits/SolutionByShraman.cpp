#include <iostream>
#include <ctype.h>
using namespace std;

string check(string str)
{
    char ch;
    int l = str.length();
    for (int i = 0; i < l; i++)
    {
        ch = str.at(i);
        if (isdigit(ch) == 0)
            return "No";
    }
    return "Yes";
}

int main()
{
    string str;
    cout << "Input: ";
    cin >> str;
    cout << "Output: " << check(str);
}
