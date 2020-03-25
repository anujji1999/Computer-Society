#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st; int p=0, len;
    getline(cin, st);
    len = st.length();
    for(int i=0; i<len; i++)
    {
        if(st[i] != st[len-i-1])
        {
            p = 1;
            break;
        }
    }        
    if(p==0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
