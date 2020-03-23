#include<iostream> 
using namespace std; 
int Product_of_digits(int n) 
{ 
    int product = 1;   
    while (n != 0)  
    { 
        if(n%10==0)
            n = n / 10;
        product = product * (n % 10); 
        n = n / 10; 
    }   
    return product; 
} 
int main() 
{ 
    int n; 
    cout<<"enter number :";
    cin>>n;
    cout <<endl<<"product of digits = "<<Product_of_digits(n); 
}
