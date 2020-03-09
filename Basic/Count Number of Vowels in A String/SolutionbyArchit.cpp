#include<bits/stdc++.h>
using namespace std;


//Program to count the number of vowels in the string by Archit Garg CSE 1st year


int count_vowels(string str)
{
  int count=0;

 for(int i=0;str[i]!='\0';i++) 
 { 
   char ch=str[i];
    if(ch==65 || ch==69 || ch==73 || ch==79 || ch==85 || ch==97 || ch==101 || ch==105 || ch==111 || ch==117 )  //ASCII values
    ++count;
 }


 
  return count;
}


int main()
{
    string str;
    getline(cin,str);

    cout<<"string = "<<str<<endl<<"Output = "<<count_vowels(str);  
   

}


