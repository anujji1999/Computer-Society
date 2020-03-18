#include <iostream>
#include <string>

using namespace std;

int main()
{
    string st; int p=0;
    cout <<"Input = ";
    getline(cin, st);
    for(int i=0; i<st.length(); i++)
        if( !(st[i] >= '0' && st[i] <= '9' || st[i] == ' ') )
            {
                p=1;
                break;
            }
    if(p==0)
        cout << "\nOutput = Yes";
    else
        cout << "\nOutput = No";
    return 0;
}
