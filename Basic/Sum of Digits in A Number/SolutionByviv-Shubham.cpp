#include<iostream> 
using namespace std; 
int sum_of_digits(int num) 
 {
  return ((num == 0) ? 0 : (num%10 + sum_of_digits(num/10))); 
 } 
int main() 
{
    int num;
    cout<<"Input = ";
    cin>>num;
    cout <<endl<< "Output = "<< sum_of_digits(num);
    return 0; 
} 
