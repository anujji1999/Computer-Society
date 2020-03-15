#include <stdio.h>
#include<conio.h>
void leap (int n);
int main ()
{
  int n;
  printf ("input = ");
  scanf ("%d", &n);
  leap (n);
  return 0;
}

void leap (int n)
{
  if (n % 4 == 0)
    {printf (" output = Yes");}
  else
    {
      printf ("output = No");
    }
}
