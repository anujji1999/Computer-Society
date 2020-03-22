#include<iostream> 
using namespace std; 
bool check_Prime(int n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
 
    for (int i=5; i*i<=n; i+=6) 
        {
        	if (n%i == 0 || n%(i+2) == 0) 
            return false;
        }
 
    return true; 
} 
int main() 
{   int n;
    cout<<"N = ";
    cin>>n;
    check_Prime(n)?  cout <<endl<<" YES ": cout <<endl<<" NO "; 
    return 0; 
} 
