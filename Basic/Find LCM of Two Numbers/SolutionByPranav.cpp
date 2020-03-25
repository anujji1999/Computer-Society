#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout <<  "Enter first number ";
    cin >> a;
    cout << "\nEnter second number ";
    cin >> b;
    c = a*b;
    while(a!=b)
        {
        if(a>b)
          a=a-b;
        else
          b=b-a;
        }
    cout<< "\nLCM = " << c/a <<endl;
    return 0;
}
