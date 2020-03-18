#include <iostream>
using namespace std;
int main(){
   int n , p=0;
   cout<<"N =  ";
   cin>>n;

   for(int i = 2; i <= n / 2; i++) {
      if(n % i == 0) {
         p=1;
         break;
      }
   }
   if (p==0)
      cout<<"\nOutput = Yes";
   else
      cout<<"\nOutput = No";
   return 0;
}
