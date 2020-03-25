#include <iostream>
using namespace std;
int main()
{
    string st; int len = 0;
    getline(cin, st);
    for(int i=0; st[i]!='\0' ; i++)   
        len++;
    cout << len;
    return 0;
}
