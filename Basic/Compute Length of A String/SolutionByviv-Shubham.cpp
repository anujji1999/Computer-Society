#include<iostream>
using namespace std;
int length_of_string(string str){
  int len=0;
for(int i=0;str[i]!='\0';++i) 
 ++len;
return len;
}
int main()
{
    string str;
    cout<<" enter string : ";
    getline(cin,str);
    cout<<endl<<"length = "<<length_of_string(str);  
 }
