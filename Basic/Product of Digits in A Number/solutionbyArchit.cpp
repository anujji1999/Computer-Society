#include<bits/stdc++.h>
using namespace std;


// program to find product of all digits in the number by Archit garg CSE 1st year


int product_of_number(int n)
{
  int product=1;
  while(n!=0){
    if(n%10!=0)
    product*=n%10;
    n/=10;
  }
  return product;

}




int main()
{
    int n;
    cin>>n;

    cout<<"Input = "<<n<<endl<<"Output = "<<product_of_number(n);



}
