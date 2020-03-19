#include<bits/stdc++.h>
using namespace std;


// program to implement power function without using power operation by Archit garg CSE 1st year.


long long power_function(int base,int power)
{
 if(power==0)
 return 1;

 if(power>=0)
 return base * power_function(base,power-1);

 
 if(power<=0)
  return base * power_function(base,power+1);

}




int main()
{
    long long base,power;
    cin>>base>>power;
 
    cout<<"Base = "<<base<<", Power = "<<power<<endl<<"Output = ";
    if(power>0)
    cout<<power_function(base,power);
    else
    {
      cout<<1/power_function(base,power);
    }
    
    return 0;


     
}
