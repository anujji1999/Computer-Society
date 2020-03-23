#include<iostream>
#include<string.h>
using namespace std;
bool is_Palindrome(string str)
{
    int len = 0;
    len = str.size();        
    for (int i=0 ; i<(len/2) ; ++i){
        if(str[i]!=str[len-1-i])
            return false;}
    return true;
 }
int main()
{
    string str;
    cout << "Enter string : ";
    getline(cin,str);
    is_Palindrome(str) ?  cout<<endl<< "Yes" : cout << endl<< "No";
    return 0;
}
