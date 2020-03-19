#include<bits/stdc++.h>
using namespace std;


// program to reverse a string by Archit garg CSE 1st year


string sum_of_number(string str)
{
  int st=0,ed=str.size()-1;

  while(st<ed){
    int temp;
    temp=str[st];
    str[st]=str[ed];
    str[ed]=temp;
    st++;ed--;
  }
  return str;

}




int main()
{
    string str;
    getline(cin,str);
 
    cout<<sum_of_number(str);
   

     
}
