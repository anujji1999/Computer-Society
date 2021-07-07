#include<iostream>
#include<string.h>
using namespace std;
bool check_if_string_only_contain_digits(string str)
{int flag=0;
    for(int i=0;str[i]!='\0';i++)
    {
    if(isdigit(str[i])==0)
    ++flag;
    }
    if(flag==0)
    return true;
    else 
    return false;

}
int main() {
    string str;
    cout<<"enter string : ";
    getline(cin,str);
    check_if_string_only_contain_digits(str) ? cout<<endl<<"yes" : cout<<endl<<"no";
    return 0;
}
