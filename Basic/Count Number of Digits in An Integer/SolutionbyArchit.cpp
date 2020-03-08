#include<bits/stdc++.h>
using namespace std;


//Program to Count Number of Digits in An Integer by Archit Garg CSE 1st year


int no_of_digits(int n){
  int length=0;

  while (n!=0)
  {
      n/=10;
      length++;
  }
  
  return length;
}


int main()
{
    int n;
    cin>>n;

    cout<<"N = "<<n<<endl<<"Output = "<<no_of_digits(n);  
   

}


      
    
