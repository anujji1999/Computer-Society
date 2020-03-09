#include<bits/stdc++.h>
using namespace std;


// program to find sum of all digits in the number by Archit garg CSE 1st year


int sum_of_number(int n)
{
  int sum=0;
  while(n!=0){
    sum+=n%10;
    n/=10;
  }
  return sum;

}




int main()
{
    int n;
    cin>>n;
 
    cout<<"Input = "<<n<<endl<<"Output = "<<sum_of_number(n);
   

     
}
