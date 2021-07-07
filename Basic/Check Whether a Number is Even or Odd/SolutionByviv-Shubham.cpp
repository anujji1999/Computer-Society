#include<iostream> 
using namespace std; 
bool isEven(int n) 
{ 
    return ((n / 2) * 2 == n); 
} 
int main() 
{ 
    int n ; 
    cout<<"N = ";
    cin>>n;
    isEven(n) ? cout <<endl<<"Even" : cout <<endl<<"Odd"; 
    return 0; 
}
