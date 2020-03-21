#include <stdio.h>

void factorial(int n);
int main ()
{
  int n;
  printf ("Enter the number  you want factorial of : \n");
  scanf ("%d",&n);
    factorial(n);
  return 0;
}
void factorial(int n)
{
long b=1;
 for(int i = 1; i <=n; i++)
    { 
        b=b*i;
    }
    printf("factorial is %ld",b);
}
