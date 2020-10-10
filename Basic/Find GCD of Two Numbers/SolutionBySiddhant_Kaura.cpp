/*
    Program Description : program to find the gcd of two given number
    Function Name : gcdOfTwo(int,int) -- return type int
  
*/

#include <iostream>
using namespace std;
int gcdOfTwo(int num1,int num2){
    if(num2 == 0){
        return num1;
    }
    else{
        return gcdOfTwo(num2,num1%num2);
    }
}
int main() {
    int num1,num2;
    cin >> num1 >> num2;
    cout << "Output = " << gcdOfTwo(num1,num2);
}
