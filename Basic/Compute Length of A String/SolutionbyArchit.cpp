#include<bits/stdc++.h>
using namespace std;


//Program to compute length of string by Archit Garg CSE 1st year


int find_length(string str){
  int length=0;

 for(int i=0;str[i]!='\0';i++) 
 ++length;

 
  return length;
}


int main()
{
    string str;
    getline(cin,str);

    cout<<"length = "<<find_length(str);  
   

}


      
    
