#include<iostream> 
using namespace std; 
int gcd(int n1, int n2) 
{ 
    if (n2 == 0) 
        return n1; 
    return gcd(n2, n1 % n2);  
} 
int lcm(int n1, int n2)  
 {  
    return (n1*n2)/gcd(n1, n2);  
 }
int main() 
{ 
    int n1,n2; 
    cout<<"enter 1st number : ";
    cin>>n1;
    cout<<endl<<"enter 2nd number : ";
    cin>>n2;
    cout<<endl<<"LCM = "<<lcm(n1, n2); 
    return 0; 
} 
