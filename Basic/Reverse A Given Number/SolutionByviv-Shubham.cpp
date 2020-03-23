#include<iostream> 
using namespace std; 
int rev_num(int num) 
{ 
    int rev_num = 0; 
    while(num > 0) 
    { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
} 
int main() 
{ 
    int num;
    cout<<"Input = ";
    cin>>num;
    cout <<endl<< "Output = "<< rev_num(num);
    return 0; 
}
