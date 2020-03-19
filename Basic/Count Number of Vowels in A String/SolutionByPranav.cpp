#include <iostream>

using namespace std;

int main()
{
    string st; int count = 0;
    cout << "string = ";
    getline(cin,st);
    
    //loop for counting vowels
    for(int i=0;st[i]!='\0';i++) 
    { 
    if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u' || st[i]=='A' || st[i]=='E' || st[i]=='I' || st[i]=='O' || st[i]=='U' )
    count++;
    }
    cout << "\noutput = " <<count;    
    return 0;
}
